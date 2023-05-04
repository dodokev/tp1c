#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main() 
{	
	cv::Mat image = cv::Mat::zeros(300, 300, CV_8UC3);
	Rectangle first = Rectangle(cv::Point(10, 10), cv::Point(200, 250), true, cv::Scalar(255,255,255), 10);
	first.affiche(image);

	Circle second = Circle(10);

	cv::waitKey();

	cv::destroyAllWindows();
	std::cout << "AAAAAAAAAAAAAA";
	return 0;
}
