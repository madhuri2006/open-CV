#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc,char** argv){
    cout<<"Starting OpenCV Program..."<<endl;
    string imagePath="lenna.jpg";
    Mat srcImage=imread(imagePath);
    if(!srcImage.data){
        cerr<<"Error: Could not open or find the image!"<<endl;
        return 1;
    }
    imshow("Source Image",srcImage);
    waitKey(0);
    cout<<"Program finished."<<endl;
    return 0;
}
