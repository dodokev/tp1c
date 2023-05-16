#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main() 
{
	//bijour bijour les amis
	cv::Mat image = cv::Mat::zeros(500, 500, CV_8UC3);
	//rectangle(point(depart), point(arrive), fill?, color(scalar), edgewidth)
	Rectangle test1 = Rectangle(cv::Point(10, 10), cv::Point(300, 200), false, cv::Scalar(0, 0, 255), 10);
	//circle(point(center), fill?, color(scalar), edgewidth, diametre)
	Circle test2 = Circle(cv::Point(250, 250), true, cv::Scalar(255, 0, 0), 100, 200);

	test1.draw(image);
	test2.draw(image);

	//display un des deux pour display tout
	test1.display(image);


	std::cout << "AAAAAAAAAAAAAA";

	std::cout << "c'est un test";
	std::cout << "encore un test";

	return 0;
}
