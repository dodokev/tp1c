#pragma once
#include "Forme.h"

class Line :
    public Forme
{
private:
	sf::RenderWindow& fenetre;
	int x;
	int y;
	int longueur;
	float largeurLigne;
	float rotation;
	sf::Color couleurLigne;
	std::string ID;

public:
	Line(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne);

	sf::RenderWindow& getFenetre();
	int getX();
	int getY();
	int getLongueur();
	float getLargeurLigne();
	float getRotation();
	sf::Color getCouleurLigne();
	std::string getID();

    virtual void draw() = 0;
};

