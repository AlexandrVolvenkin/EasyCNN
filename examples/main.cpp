#include <opencv2/opencv.hpp>

//int main() {
//
//    cv::Mat image = cv::imread("lena.jpg");
//
//    cv::imshow("Image", image);
//
//    cv::waitKey(0);
//
//    return 0;
//
//}

//////////////////////////////////////////////////////////////////////////
//mnist
extern int mnist_main(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	return mnist_main(argc, argv);
}
