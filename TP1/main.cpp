#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
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

	Rectangle test1(window, 50,50,10,5,1,sf::Color(20,20,20), sf::Color(40, 40, 40));
	Circle test2();

	while (window.isOpen())
	{
		window.clear(sf::Color::Black);

		test1.draw();
		test2.draw();

		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.display();
	}

	return 0;
}
