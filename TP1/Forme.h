#pragma once
#include "SFML/Graphics.hpp"

class Forme
{
private:
	sf::RenderWindow& fenetre;
	float largeurBord;
	int x;
	int y;
	std::string ID;


public:
	Forme(sf::RenderWindow& _fenetre, float _largeurBord, int _x, int _y, std::string _ID);

	sf::RenderWindow& getFenetre();
	float getLargeurBord();
	int getX();
	int getY();
	std::string getID();
	
	virtual void draw() = 0;
};

