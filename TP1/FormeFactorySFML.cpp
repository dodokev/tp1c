#include "FormeFactorySFML.h"

FormeFactorySFML::FormeFactorySFML()
	:FormeFactory()
{
}

std::shared_ptr<Forme> FormeFactorySFML::createRectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord)
{
	return std::make_shared<RectangleSFML>(_fenetre, _x, _y, _longueur, _largeur, _largeurBords, _couleurFill, _couleurBord);
}

std::shared_ptr<Forme> FormeFactorySFML::createCircle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord)
{
	return std::make_shared<CircleSFML>(_fenetre, _x, _y, _rayon, _largeurBord, _couleurFill, _couleurBord);
}

std::shared_ptr<Forme> FormeFactorySFML::createLine(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne)
{
	return std::make_shared<LineSFML>(_fenetre, _x, _y, _longueur, _largeurLigne, _rotation, _couleurLigne);
}

