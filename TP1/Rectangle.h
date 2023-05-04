#pragma once

#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

class Rectangle
{
private:
	cv::Point depart;
	cv::Point arrive;
	bool filled;
	cv::Scalar color;
	int edgewidth;

public:
	Rectangle(cv::Point _depart, cv::Point _arrive, bool filled, cv::Scalar color, int _edgewidth);

	void affiche(cv::Mat _image);
};

