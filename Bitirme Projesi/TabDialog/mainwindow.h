#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define FACE_CASCADE_FILE_NAME "/home/eda/opencv/opencv-3.2.0/data/haarcascades/haarcascade_frontalface_alt.xml"

#include <QMainWindow>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/face.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/cudaobjdetect.hpp>
#include <opencv2/cudaimgproc.hpp>
#include <omp.h>
#include <pthread.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
using namespace cv;
using namespace cv::face;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    cv::VideoCapture videoCap;
    cv::Mat image, grayImage, faceImage, largestImage;
    QImage QHomeImage, QTrainImage1, QTrainImage2, QRecognitionImage;//This will create QImage which is shown in Qt Label
    QTimer *timer;//A timer is needed in GUI application
    cv::CascadeClassifier faceCascade;
    std::vector <cv::Rect> faces;
    cv::Rect largestObject, roi_b;
    int tabIndex;

    string fileName;
    string folder;
    int fileNumber;

    string csvName = "home/eda/Masaüstü/Face/at.csv";
    string ymlFile = "/home/eda/Masaüstü/Face/faces95.yml";
    ofstream csvFile;

    Ptr <BasicFaceRecognizer> model=createFisherFaceRecognizer();

    string line, path, classlabel;
    int personLabels;
    vector<Mat> images;
    vector<int> labels;
public slots:
    void changeTab();
    void homeFunction();
    void trainingFunction();
    void recognitionFunction();
    void read_csv(const string& filename, vector<Mat>& images, vector<int>& labels, char separator = ';');

private slots:
    void on_tabWidget_destroyed(QObject *arg1);

    void on_addPerson_clicked();

    void on_addImages_clicked();

    void on_pushButton_2_clicked();

    void on_faceTrain_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
