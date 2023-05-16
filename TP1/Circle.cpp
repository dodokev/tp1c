#include "Circle.h"

Circle::Circle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
	:Forme(couleurFill, largeurBord), fenetre(_fenetre),x(_x), y(_y), rayon(_rayon), largeurBord(_largeurBord) , couleurFill(_couleurFill), couleurBord(_couleurBord)
{
	ID = ("Circle, " + std::to_string(_x) + ", " + std::to_string(_y) + ", " + std::to_string(_rayon));
}

sf::RenderWindow& Circle::getFenetre()
{
	return fenetre;
}

int Circle::getX()
{
	return x;
}

int Circle::getY()
{
	return y;
}

float Circle::getRayon()
{
	return rayon;
}

float Circle::getLargeurBord()
{
	return largeurBord;
}

sf::Color Circle::getCouleurFill()
{
	return couleurFill;
}

sf::Color Circle::getCouleurBord()
{
	return couleurBord;
}

std::string Circle::getID()
{
	return ID;
}

/*
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
*/