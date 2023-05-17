#include "Line.h"

Line::Line(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne)
    :Forme(_couleurLigne, _largeurLigne, ("Line,_" + std::to_string(longueur) + ",_" + std::to_string(_largeurLigne) + ",_" + std::to_string(_rotation))), x(_x), y(_y), fenetre(_fenetre), longueur(_longueur), rotation(_rotation)
{
    
}

sf::RenderWindow& Line::getFenetre()
{
    return fenetre;
}

int Line::getX()
{
    return x;
}

int Line::getY()
{
    return y;
}

int Line::getLongueur()
{
    return longueur;
}


float Line::getLargeurLigne()
{
    return largeurLigne;
}

float Line::getRotation()
{
    return rotation;
}

sf::Color Line::getCouleurLigne()
{
    return couleurLigne;
}

