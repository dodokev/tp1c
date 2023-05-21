#include "Triangle.h"

Triangle::Triangle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
	:Forme(_fenetre, _largeurBord, _x, _y, ("Triangle,_" + std::to_string(_x) + ",_" + std::to_string(_y) + ",_" + std::to_string(_rayon))), rayon(_rayon), couleurFill(_couleurFill), couleurBord(_couleurBord)
{
}

float Triangle::getRayon()
{
	return rayon;
}

sf::Color Triangle::getCouleurFill()
{
	return couleurFill;
}

sf::Color Triangle::getCouleurBord()
{
	return couleurBord;
}
