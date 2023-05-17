#pragma once
#include "SFML/Graphics.hpp"
#include "Drawer.h"
#include <fstream>
#include <iostream>
#include <sstream>

class Application
{
private:
	sf::RenderWindow window;
	Drawer drawer;
	
public:
	Application();

	void run();
};

