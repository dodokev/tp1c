#include "Rectangle.h"

Rectangle::Rectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, int _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord)
	:Forme(_couleurFill, _largeurBords) , fenetre(_fenetre), x(_x), y(_y), longueur(_longueur), largeur(_largeur), largeurBord(_largeurBords), couleurFill(_couleurFill), couleurBord(_couleurBord)
{
}

void Rectangle::draw()
{
	sf::RectangleShape rectangle(sf::Vector2f(longueur, largeur));
	rectangle.setOrigin(sf::Vector2f(longueur / 2, largeur / 2));
	rectangle.setPosition(sf::Vector2f(x, y));
	rectangle.setFillColor(couleurFill);
	rectangle.setOutlineThickness(largeurBord);
	rectangle.setOutlineColor(couleurBord);

	fenetre.draw(rectangle);

}
