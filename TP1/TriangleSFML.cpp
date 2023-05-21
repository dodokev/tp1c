#include "TriangleSFML.h"

TriangleSFML::TriangleSFML(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
	:Triangle(_fenetre, _x, _y, _rayon, _largeurBord, _couleurFill, _couleurBord)
{
}

void TriangleSFML::draw()
{
	sf::CircleShape cercle(getRayon(), 3);
	cercle.setOrigin(sf::Vector2f(getRayon() / 2, getRayon() / 2));
	cercle.setPosition(sf::Vector2f(getX(), getY()));
	cercle.setFillColor(getCouleurFill());
	cercle.setOutlineThickness(getLargeurBord());
	cercle.setOutlineColor(getCouleurBord());

	getFenetre().draw(cercle);
}
