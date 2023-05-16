#include "Forme.h"

Forme::Forme(sf::Color _color, float _edgewidth)
	:color(_color), edgewidth(_edgewidth)
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
