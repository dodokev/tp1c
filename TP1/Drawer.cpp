#include "Drawer.h"

Drawer::Drawer()
{
}

void Drawer::addRectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord)
{
	formes.push_back(factory.createRectangle(_fenetre, _x, _y, _longueur, _largeur, _largeurBords, _couleurFill, _couleurBord));
}

void Drawer::addCircle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
{
	formes.push_back(factory.createCircle(_fenetre, _x, _y, _rayon, _largeurBord, _couleurFill, _couleurBord));
}

void Drawer::addTriangle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
{
	formes.push_back(factory.createTriangle(_fenetre, _x, _y, _rayon, _largeurBord, _couleurFill, _couleurBord));
}

void Drawer::addLine(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne)
{
	formes.push_back(factory.createLine(_fenetre, _x, _y, _longueur, _largeurLigne, _rotation, _couleurLigne));
}

void Drawer::draw()
{
	for (int indexformes = 0; indexformes < formes.size(); ++indexformes) {
		formes.at(indexformes)->draw();
	}
}
