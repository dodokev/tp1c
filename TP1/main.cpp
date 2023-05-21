#include <iostream>
#include "FormeFactorySFML.h"
#include "Drawer.h"
#include "SFML/Graphics.hpp"

int main() 
{
	/*//cv::Mat image = cv::Mat::zeros(500, 500, CV_8UC3);
	sf::RenderWindow(sf::VideoMode(1000, 1000), "TP_trop_bien");
	//rectangle(point(depart), point(arrive), fill?, color(scalar), edgewidth)
	Rectangle test1 = Rectangle(cv::Point(10, 10), cv::Point(300, 200), false, cv::Scalar(0, 0, 255), 10);

	//circle(point(center), fill?, color(scalar), edgewidth, diametre)
	Circle test2 = Circle(cv::Point(250, 250), true, cv::Scalar(255, 0, 0), 100, 200);

	test1.draw(image);
	test2.draw(image);

	//display un des deux pour display tout
	test1.display(image);
	*/


	sf::RenderWindow window(sf::VideoMode(1000, 1000), "TP trop bien");
	
	Drawer drawer;
	drawer.addRectangle(window, 400, 450, 200, 250, 10, sf::Color(255, 0, 0), sf::Color(0, 255, 0));
	drawer.addCircle(window, 500, 500, 300, 10, sf::Color(0, 0, 255), sf::Color(255, 255, 0));
	drawer.addTriangle(window, 500, 500, 300, 10, sf::Color(25, 87, 255), sf::Color(200, 21, 50));
	drawer.addLine(window, 250, 250, 400, 50, 45, sf::Color(255, 0, 0));

	//std::shared_ptr<Forme> test1 =  factory.createRectangle(window, 400, 450,200,250, 10,sf::Color(255,0,0), sf::Color(0, 255, 0));
	//std::shared_ptr<Forme> test2 = factory.createCircle(window, 500, 500, 300, 10, sf::Color(0,0,255), sf::Color(255,255, 0));

	while (window.isOpen())
	{
		window.clear(sf::Color::Black);

		//test1->draw();
		//test2->draw();
		drawer.draw();
	
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) || event.type == sf::Event::Closed)
				window.close();
		}

		window.display();
	}

	return 0;
}
