#include<iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  

using namespace cv;

int main()
{
	Mat img = imread("D:\\1-2.bmp");
	namedWindow("≤‚ ‘ÕºœÒ");
	imshow("≤‚ ‘", img);
	waitKey(6000);

}