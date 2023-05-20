#pragma once
#include "Forme.h"

class Line :
    public Forme
{
private:
	int longueur;
	float rotation;
	sf::Color couleurLigne;

public:
	Line(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne);

	int getLongueur();
	float getRotation();
	sf::Color getCouleurLigne();

    virtual void draw() = 0;
};

