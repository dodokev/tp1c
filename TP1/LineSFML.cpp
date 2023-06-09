#include "LineSFML.h"

LineSFML::LineSFML(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne)
	:Line(_fenetre, _x, _y, _longueur, _largeurLigne, _rotation, _couleurLigne)
{
}

void LineSFML::draw()
{
	sf::RectangleShape line(sf::Vector2f(getLongueur(), getLargeurBord()));
	line.setOrigin(sf::Vector2f(getLongueur() / 2, getLargeurBord() / 2));
	line.setPosition(sf::Vector2f(getX(), getY()));
	line.setFillColor(getCouleurLigne());
	line.setOutlineColor(getCouleurLigne());
	line.setRotation(getRotation());

	getFenetre().draw(line);
}
