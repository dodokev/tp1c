#pragma once
#include "Circle.h"
class CircleSFML :
    public Circle
{
public:
    CircleSFML(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);

    void draw() override;
};

