#pragma once
#include "SFML/Graphics.hpp"

class Forme
{
private:
	sf::Color color;
	int edgewidth;

public:
	Forme(sf::Color _color, int _edgewidth);
	sf::Color getColor();
	int getEdgewitdh();

	virtual void draw() = 0;
};

