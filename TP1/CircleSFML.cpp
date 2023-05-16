#include "CircleSFML.h"

CircleSFML::CircleSFML(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
	:Circle(_fenetre, _x, _y, _rayon, _largeurBord, _couleurFill, _couleurBord)
{
}

void CircleSFML::draw()
{
	sf::CircleShape cercle(getRayon());
	cercle.setOrigin(sf::Vector2f(getRayon() / 2, getRayon() / 2));
	cercle.setPosition(sf::Vector2f(getX(), getY()));
	cercle.setFillColor(getCouleurFill());
	cercle.setOutlineThickness(getLargeurBord());
	cercle.setOutlineColor(getCouleurBord());

	getFenetre().draw(cercle);
}
