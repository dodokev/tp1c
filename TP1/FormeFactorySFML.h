#pragma once
#include "FormeFactory.h"
#include "CircleSFML.h"
#include "RectangleSFML.h"

class FormeFactorySFML :
    public FormeFactory
{
public:
    FormeFactorySFML();

    std::shared_ptr<Forme> createRectangle(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, int _largeur, float _largeurBords, sf::Color _couleurFill, sf::Color _couleurBord);
    std::shared_ptr<Forme> createCircle(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);
};

