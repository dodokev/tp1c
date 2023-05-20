#include "Line.h"



Line::Line(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne)
    :Forme(_fenetre, _largeurLigne, _x, _y, ("Line,_" + std::to_string(longueur) + ",_" + std::to_string(_largeurLigne) + ",_" + std::to_string(_rotation))), longueur(_longueur), rotation(_rotation), couleurLigne(_couleurLigne)
{
}

int Line::getLongueur()
{
    return longueur;
}


float Line::getRotation()
{
    return rotation;
}

sf::Color Line::getCouleurLigne()
{
    return couleurLigne;
}

