#pragma once
#include "Forme.h"
#include "SFML/Graphics.hpp"

class Circle
	:public Forme
{
private:
	sf::RenderWindow& fenetre;
	int x;
	int y;
	float rayon;
	float largeurBord;
	sf::Color couleurFill;
	sf::Color couleurBord;
	std::string ID;

public:
	Circle(sf::RenderWindow& _fenetre , int _x , int _y , float _rayon , float _largeurBord , sf::Color _couleurFill , sf::Color _couleurBord);

	sf::RenderWindow& getFenetre();
	int getX();
	int getY();
	float getRayon();
	float getLargeurBord();
	sf::Color getCouleurFill();
	sf::Color getCouleurBord();
	std::string getID();


	virtual void draw() = 0;
};

