#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/face.hpp>
#include <opencv2/opencv.hpp>
#include <omp.h>
#include <sys/stat.h>//for mkdir
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
using namespace cv;
using namespace cv::face;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    videoCap.open(0);
    csvFile.open("/home/eda/Masaüstü/Face/at.csv",ios::app);
    cout<<"eda"<<endl;
    read_csv(csvName, images, labels,';');

    //model->train(images,labels);
    //model->save(ymlFile);
    //cout<<classlabel<<endl;
    personLabels=atoi(classlabel.c_str());
    cout<<personLabels<<endl;

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(changeTab()));
    timer->start();//Will start timer
}
void MainWindow::changeTab(){
    tabIndex = ui->tabWidget->currentIndex();
    if(tabIndex == 0){ homeFunction();}
    else if(tabIndex == 1){ trainingFunction();}
    else if(tabIndex == 2){ recognitionFunction();}
    else {/*Do any thing*/}
}
void MainWindow::homeFunction(){
    //cout<<index<<endl;
    videoCap>>image;
    cv::cvtColor(image, image, CV_BGR2RGB);//Qt reads in RGB whereas cv in BGR
    QImage QHomeImage((uchar *)image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);
    ui->label->setPixmap(QPixmap::fromImage(QHomeImage));
}
void MainWindow::trainingFunction(){
    //cout<<index<<endl;
    videoCap>>image;
    //cout<<image.rows;
    //cout<<"   "<<image.cols<<endl;

    try{
    faceCascade.load(FACE_CASCADE_FILE_NAME);
    }
    catch(cv::Exception& e){
        cerr<<"Error opening haarcascade file \""<<FACE_CASCADE_FILE_NAME<<"\".Reason: "<<e.msg<<endl;
        return;
    }
    faceCascade.detectMultiScale(image, faces, 1.15f, 4, CASCADE_FIND_BIGGEST_OBJECT,
                                 Size(15, 15));
    for(size_t i=0; i<faces.size(); i++){
        cv::rectangle(image, faces[i], CV_RGB(0, 255, 0), 1);
    }
    if (faces.size() > 0) {
        // Return the only detected largest object.
        largestObject = (Rect)faces.at(0);
        largestImage = image(largestObject);
        //Resize olayını uygulaa training sette hepsinin aynı boyutta olması için.
        cv::resize(largestImage, largestImage, Size(200, 200), 0, 0, INTER_LINEAR);
        QImage QTrainImage1((uchar *)largestImage.data, largestImage.cols, largestImage.rows, largestImage.step,
                          QImage::Format_RGB888);
        ui->label_5->setPixmap(QPixmap::fromImage(QTrainImage1));

    }
    else {
    }
    QImage QTrainImage2((uchar *)image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);
    ui->label_2->setPixmap(QPixmap::fromImage(QTrainImage2));
}
void MainWindow::recognitionFunction(){
    //cout<<index<<endl;
    videoCap>>image;

    try{
    faceCascade.load(FACE_CASCADE_FILE_NAME);
    }
    catch(cv::Exception& e){
        cerr<<"Error opening haarcascade file \""<<FACE_CASCADE_FILE_NAME<<"\".Reason: "<<e.msg<<endl;
        return;
    }
    faceCascade.detectMultiScale(image, faces, 1.15f, 4, CASCADE_FIND_BIGGEST_OBJECT,
                                 Size(15, 15));
    for(size_t i=0; i<faces.size(); i++){
        cv::rectangle(image, faces[i], CV_RGB(0, 255, 0), 1);
    }
    if (faces.size() > 0) {
        // Return the only detected largest object.
        largestObject = (Rect)faces.at(0);
        largestImage = image(largestObject);
        //Resize olayını uygulaa training sette hepsinin aynı boyutta olması için.
        cv::resize(largestImage, largestImage, Size(200, 200), 0, 0, INTER_LINEAR);
        QImage QTrainImage((uchar *)largestImage.data, largestImage.cols, largestImage.rows, largestImage.step,
                          QImage::Format_RGB888);
        ui->label_4->setPixmap(QPixmap::fromImage(QTrainImage));

    }
    else {
    }
    QImage QRecognitionImage((uchar *)image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);
    ui->label_3->setPixmap(QPixmap::fromImage(QRecognitionImage));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addPerson_clicked()
{
    personLabels++;
    QString qs = ui->lineEdit->text();
    string dosyaAdi = qs.toUtf8().constData();
    cout<<dosyaAdi<<endl;
    string dosyaYolu = "/home/eda/Masaüstü/Fisher/at/";
    fileNumber=1;
    //string box_text = format("%s",utf8_text,a);
    //imwrite(a, largestImage);
    //imwrite(a, largestImage);//Kaydetme tamam
    //imwrite("/home/eda/Masaüstü/Fisher/asdfgfds/eda.pgm", largestImage);
    folder = dosyaYolu+dosyaAdi;
    mkdir(folder.c_str(),S_IRWXU);
    fileName = folder.c_str();

    QMessageBox::information(this, "Title",ui->lineEdit->text());
    /*
    //Hızlı kayıt için bu şekilde işlem yaptım.
    //Eğer kendi elimizle belli şekilde kayıt yapmak istersek burayı kaldırıp
    //kendimiz butona tıkladığımızda kayıt işlemi yaparız.
    QTimer *timerAdd;
    timerAdd = new QTimer(this);
    connect(timerAdd, SIGNAL(timeout()), this, SLOT(on_addImages_clicked()));
    timerAdd->start();//Will start timer*/
}

void MainWindow::on_addImages_clicked()
{
    fileName = folder.c_str();
    stringstream ssfn;
    ssfn<<fileName<<"/"<<fileNumber<<".pgm";
    fileName = ssfn.str();
    imwrite(fileName, largestImage);
    //csvFile.open("/home/eda/Masaüstü/Fisher/deneme.csv",ios::app);
    csvFile<<fileName<<";"<<personLabels<<endl;
    fileNumber++;
    cout<<fileName<<endl;
    //cout<<fileNumber<<endl;
}

void MainWindow::on_tabWidget_destroyed(QObject *arg1){}
void MainWindow::read_csv(const string& filename, vector<Mat>& images, vector<int>& labels, char separator) {
    std::ifstream file(filename.c_str(), ifstream::in);
    if (!file) {
        string error_message = "No valid input file was given, please check the given filename.";
        CV_Error(CV_StsBadArg, error_message);
    }
    while (getline(file, line)) {
        stringstream liness(line);
        getline(liness, path, separator);
        getline(liness, classlabel);
        if(!path.empty() && !classlabel.empty()) {
            images.push_back(imread(path, 0));
            labels.push_back(atoi(classlabel.c_str()));
        }
        //cout<<classlabel<<endl;
    }
}


void MainWindow::on_faceTrain_clicked()
{
}

//Tab:Recognition and Clicked: recogntion button
void MainWindow::on_pushButton_2_clicked()
{

}

