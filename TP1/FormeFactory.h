#pragma once
#include "SFML/Graphics.hpp"
#include "Rectangle.h"
#include "Circle.h"

class FormeFactory
{
public:
	FormeFactory();

	virtual std::shared_ptr<Forme> createRectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord) = 0;
	virtual std::shared_ptr<Forme> createCircle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord) = 0;
	virtual std::shared_ptr<Forme> createTriangle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord) = 0;
	virtual std::shared_ptr<Forme> createLine(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne) = 0;
};

