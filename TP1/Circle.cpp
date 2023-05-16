#include "Circle.h"

Circle::Circle(sf::RenderWindow _fenetre, int _x, int _y, int _rayon, int _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
	:Forme(couleurFill, largeurBord), fenetre(_fenetre),x(_x), y(_y), rayon(_rayon), largeurBord(_largeurBord) , couleurFill(_couleurFill), couleurBord(_couleurBord)
{
}

void Circle::draw()
{
	sf::CircleShape cercle(rayon);
	cercle.setOrigin(sf::Vector2f(rayon / 2, rayon / 2));
	cercle.setPosition(sf::Vector2f(x, y));
	cercle.setFillColor(couleurFill);
	cercle.setOutlineThickness(largeurBord);
	cercle.setOutlineColor(couleurBord);

	fenetre.draw(cercle);
}
