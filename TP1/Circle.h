#pragma once
#include "Forme.h"

class Circle
	:public Forme
{
private:
	cv::Point center;
	int diametre;

public:
	Circle(cv::Point _center, bool _filled, cv::Scalar _color, int _edgewidth, int _diametre);

	void draw(cv::Mat _image);
};

