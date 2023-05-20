#pragma once
#include "Forme.h"
#include "SFML/Graphics.hpp"

class Circle
	:public Forme
{
private:
	float rayon;
	sf::Color couleurFill;
	sf::Color couleurBord;

public:
	Circle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon , float _largeurBord , sf::Color _couleurFill , sf::Color _couleurBord);

	float getRayon();
	sf::Color getCouleurFill();
	sf::Color getCouleurBord();


	virtual void draw() = 0;
};

