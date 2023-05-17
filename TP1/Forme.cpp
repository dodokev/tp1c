#include "Forme.h"

Forme::Forme(sf::Color _color, float _edgewidth, std::string _ID)
	:color(_color), edgewidth(_edgewidth), ID(_ID)
{
}

sf::Color Forme::getColor()
{
	return color;
}

float Forme::getEdgewitdh()
{
	return edgewidth;
}

std::string Forme::getID()
{
	return ID;
}
