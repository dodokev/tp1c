#pragma once
#include "Triangle.h"
class TriangleSFML :
    public Triangle
{
public:
    TriangleSFML(sf::RenderWindow& _fenetre, int _x, int _y, float _rayon, float _largeurBord, sf::Color _couleurFill, sf::Color _couleurBord);

    void draw() override;
};

