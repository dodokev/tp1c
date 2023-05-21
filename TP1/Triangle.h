#pragma once
#include "Forme.h"
class Triangle :
    public Forme
{
private:
	float rayon;
	sf::Color couleurFill;
	sf::Color couleurBord;

public:
	//le triangle est crée à partir d'un cercle
	Triangle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);

	float getRayon();
	sf::Color getCouleurFill();
	sf::Color getCouleurBord();


	virtual void draw() = 0;
};

