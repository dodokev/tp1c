#include "Rectangle.h"

Rectangle::Rectangle(cv::Point _depart, cv::Point _arrive, bool _filled, cv::Scalar _color, int _edgewidth)
	:depart(_depart), arrive(_arrive), Forme(_filled, _color, _edgewidth)
{
}

void Rectangle::draw(cv::Mat _image)
{
	if (getFilled() == true) {
		cv::rectangle(_image, depart, arrive, getColor(), cv::FILLED);
	}
	else {
		cv::rectangle(_image, depart, arrive, getColor(), getEdgewitdh());
	}
}


