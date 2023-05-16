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
	int rayon;
	int largeurBord;
	sf::Color couleurFill;
	sf::Color couleurBord;

public:
	Circle(sf::RenderWindow _fenetre , int _x , int _y , int _rayon , int _largeurBord , sf::Color _couleurFill , sf::Color _couleurBord);

	void draw() override;
};

