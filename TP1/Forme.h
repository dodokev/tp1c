#pragma once
#include "SFML/Graphics.hpp"

class Forme
{
private:
	sf::Color color;
	float edgewidth;
	std::string ID;
public:
	Forme(sf::Color _color, float _edgewidth, std::string _ID);

	sf::Color getColor();
	float getEdgewitdh();

	std::string getID();
	virtual void draw() = 0;
};

