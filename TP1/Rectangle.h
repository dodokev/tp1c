#pragma once
#include "Forme.h"
#include "SFML/Graphics.hpp"

class Rectangle
	:public Forme
{
private:
	sf::RenderWindow& fenetre;
	int x;
	int y;
	int longueur;
	int largeur;
	float largeurBord;
	sf::Color couleurFill;
	sf::Color couleurBord;

public:
	Rectangle(sf::RenderWindow& _fenetre , int _x , int _y , int _longueur , int _largeur , float _largeurBords , sf::Color _couleurFill , sf::Color _couleurBord);

	sf::RenderWindow& getFenetre();
	int getX();
	int getY();
	int getLongueur();
	int getLargeur();
	float getLargeurBord();
	sf::Color getCouleurFill();
	sf::Color getCouleurBord();

	virtual void draw() = 0;
};

