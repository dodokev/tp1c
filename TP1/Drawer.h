#pragma once
#include "FormeFactorySFML.h"


class Drawer
{
private:
	std::vector<std::shared_ptr<Forme>> formes;
	FormeFactorySFML factory;

public:
	Drawer();
	

	void addRectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord);
	void addCircle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);
	void addLine(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne);

	void draw();
};

