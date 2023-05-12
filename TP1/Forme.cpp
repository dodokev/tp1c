#include "Forme.h"

Forme::Forme(bool _filled, cv::Scalar _color, int _edgewidth)
	:filled(_filled), color(_color), edgewidth(_edgewidth)
{
}

bool Forme::getFilled()
{
	return filled;
}

cv::Scalar Forme::getColor()
{
	return color;
}

int Forme::getEdgewitdh()
{
	return edgewidth;
}

void Forme::display(cv::Mat _image)
{
	cv::imshow("Formes", _image);

	cv::waitKey();

	cv::destroyAllWindows();
}
