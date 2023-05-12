#pragma once
#include "Forme.h"

class Rectangle
	:public Forme
{
private:
	cv::Point depart;
	cv::Point arrive;

public:
	Rectangle(cv::Point _depart, cv::Point _arrive, bool _filled, cv::Scalar _color, int _edgewidth);

	void draw(cv::Mat _image);
};

