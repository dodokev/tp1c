#pragma once
#include "Forme.h"
#include "SFML/Graphics.hpp"

class Rectangle
	:public Forme
{
private:
	int longueur;
	int largeur;
	sf::Color couleurFill;
	sf::Color couleurBord;

public:
	Rectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);

	int getLongueur();
	int getLargeur();
	sf::Color getCouleurFill();
	sf::Color getCouleurBord();

	virtual void draw() = 0;
};

