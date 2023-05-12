#include "Circle.h"

Circle::Circle(cv::Point _center, bool _filled, cv::Scalar _color, int _edgewidth, int _diametre)
	:Forme(_filled, _color, _edgewidth), diametre(_diametre), center(_center)
{
}

void Circle::draw(cv::Mat _image)
{
	double radius = diametre / 2;
	if (getFilled() == true) {
		cv::circle(_image, center, radius, getColor(), cv::FILLED);
	}
	else {
		cv::circle(_image, center, radius, getColor(), getEdgewitdh());
	}
}
