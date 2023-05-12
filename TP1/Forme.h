#pragma once
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

class Forme
{
private:
	bool filled;
	cv::Scalar color;
	int edgewidth;

public:
	Forme(bool _filled, cv::Scalar _color, int _edgewidth);

	bool getFilled();
	cv::Scalar getColor();
	int getEdgewitdh();

	virtual void draw(cv::Mat _image) = 0;
	void display(cv::Mat _image);
};

