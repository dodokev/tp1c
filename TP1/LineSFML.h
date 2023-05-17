#pragma once
#include "Line.h"
class LineSFML :
    public Line
{
public:
    LineSFML(sf::RenderWindow& _fenetre, int _x, int _y, int _longueur, float _largeurLigne, float _rotation, sf::Color _couleurLigne);

    void draw() override;
};

