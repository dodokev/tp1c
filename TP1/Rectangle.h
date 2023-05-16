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
	int largeurBord;
	sf::Color couleurFill;
	sf::Color couleurBord;

public:
	Rectangle(sf::RenderWindow& _fenetre , int _x , int _y , int _longueur , int _largeur , int _largeurBords , sf::Color _couleurFill , sf::Color _couleurBord);

	void draw() override;
};

