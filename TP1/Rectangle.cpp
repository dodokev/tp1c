#include "Rectangle.h"



Rectangle::Rectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
	:Forme(_fenetre, _largeurBord, _x, _y, ("Rectangle,_" + std::to_string(_x) + ",_" + std::to_string(_y) + ",_" + std::to_string(_longueur) + ",_" + std::to_string(_largeur))), longueur(_longueur), largeur(_largeur), couleurFill(_couleurFill), couleurBord(_couleurBord)
{
}

int Rectangle::getLongueur()
{
	return longueur;
}

int Rectangle::getLargeur()
{
	return largeur;
}


sf::Color Rectangle::getCouleurFill()
{
	return couleurFill;
}

sf::Color Rectangle::getCouleurBord()
{
	return couleurBord;
}



/*
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
*/