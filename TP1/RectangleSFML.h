#pragma once
#include "Rectangle.h"
class RectangleSFML
	:public Rectangle
{
public:
	RectangleSFML(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);

	void draw() override;
};

