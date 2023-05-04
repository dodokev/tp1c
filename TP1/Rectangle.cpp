#include "Rectangle.h"

Rectangle::Rectangle(cv::Point _depart, cv::Point _arrive, bool _filled, cv::Scalar _color, int _edgewidth)
	:depart(_depart), arrive(_arrive), filled(_filled), color(_color), edgewidth(_edgewidth)
{
}

void Rectangle::affiche(cv:: Mat _image)
{
	if (filled == true) {
		cv::rectangle(_image, depart, arrive, color, cv::FILLED);
	}
	else {
		cv::rectangle(_image, depart, arrive, color, edgewidth);
	}

	cv::imshow("OKI", _image);
}
