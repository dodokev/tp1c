#include "Forme.h"

Forme::Forme(sf::Color _color, int _edgewidth)
	:color(_color), edgewidth(_edgewidth)
{
}

sf::Color Forme::getColor()
{
	return color;
}

int Forme::getEdgewitdh()
{
	return edgewidth;
}
