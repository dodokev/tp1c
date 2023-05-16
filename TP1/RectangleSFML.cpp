#include "RectangleSFML.h"

RectangleSFML::RectangleSFML(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord)
	:Rectangle(_fenetre, _x, _y, _longueur, _largeur, _largeurBords, _couleurFill, _couleurBord)
{
}

void RectangleSFML::draw()
{
	sf::RectangleShape rectangle(sf::Vector2f(getLongueur(), getLargeur()));
	rectangle.setOrigin(sf::Vector2f(getLongueur() / 2, getLargeur() / 2));
	rectangle.setPosition(sf::Vector2f(getX(), getY()));
	rectangle.setFillColor(getCouleurFill());
	rectangle.setOutlineThickness(getLargeurBord());
	rectangle.setOutlineColor(getCouleurBord());

	getFenetre().draw(rectangle);

}