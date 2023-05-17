#pragma once
#include "SFML/Graphics.hpp"

class Forme
{
private:
	sf::Color color;
	float edgewidth;

public:
	Forme(sf::Color _color, float _edgewidth);

	sf::Color getColor();
	float getEdgewitdh();

	virtual std::string getID() = 0;
	virtual void draw() = 0;
};

