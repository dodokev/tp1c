#include "Forme.h"



Forme::Forme(sf::RenderWindow& _fenetre, float _largeurBord, int _x, int _y, std::string _ID)
	:fenetre(_fenetre), largeurBord(_largeurBord), x(_x), y(_y), ID(_ID)
{
}

sf::RenderWindow& Forme::getFenetre()
{
	return fenetre;
}

float Forme::getLargeurBord()
{
	return largeurBord;
}

int Forme::getX()
{
	return x;
}

int Forme::getY()
{
	return y;
}

std::string Forme::getID()
{
	return ID;
}
