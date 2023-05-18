#include "Application.h"

Application::Application()
	:window(sf::VideoMode(1000,1000), "TP trop bien"), drawer()
{
}

void Application::fileRect(const std::vector<std::string>& vect)
{
	int rf = 0, gf = 0, bf = 0, re = 0, ge = 0, be = 0;

	std::stringstream iss1(vect[7]);
	iss1.ignore(1, 'rgb(');
	iss1 >> re;
	iss1.ignore(1, ',');
	iss1 >> ge;
	iss1.ignore(1, ',');
	iss1 >> be;
	
	std::stringstream iss2(vect[8]);
	iss2.ignore(1, 'rgb(');
	iss2 >> rf;
	iss2.ignore(1, ',');
	iss2 >> gf;
	iss2.ignore(1, ',');
	iss2 >> bf;

	drawer.addRectangle(window,
		std::stoi(vect[2]), std::stoi(vect[3]), std::stoi(vect[4]), std::stoi(vect[5]), std::stoi(vect[6]),
		sf::Color(rf, gf, bf), sf::Color(re, ge, be));
}

void Application::fileCirc(const std::vector<std::string>& vect)
{
int rf = 0, gf = 0, bf = 0, re = 0, ge = 0, be = 0;

	std::stringstream iss1(vect[6]);
	iss1.ignore(1, 'rgb(');
	iss1 >> re;
	iss1.ignore(1, ',');
	iss1 >> ge;
	iss1.ignore(1, ',');
	iss1 >> be;

	std::stringstream iss2(vect[7]);
	iss2.ignore(1, 'rgb(');
	iss2 >> rf;
	iss2.ignore(1, ',');
	iss2 >> gf;
	iss2.ignore(1, ',');
	iss2 >> bf;
	
	drawer.addCircle(window,
		std::stoi(vect[2]), std::stoi(vect[3]), std::stoi(vect[4]), std::stoi(vect[5]),
		sf::Color(rf, gf, bf), sf::Color(re, ge, be));
}

void Application::fileLine(const std::vector<std::string>& vect)
{
	int rf = 0, gf = 0, bf = 0, re = 0, ge = 0, be = 0;

	std::stringstream iss1(vect[7]);
	iss1.ignore(1, 'rgb(');
	iss1 >> re;
	iss1.ignore(1, ',');
	iss1 >> ge;
	iss1.ignore(1, ',');
	iss1 >> be;

	drawer.addLine(window,
		std::stoi(vect[2]), std::stoi(vect[3]), std::stoi(vect[4]), std::stoi(vect[5]), std::stoi(vect[6]),
		sf::Color(re, ge, be));
}

void Application::run()
{
	std::string fileName;
	std::cout << "Nom du fichier de formes à dessiner : ";
	std::cin >> fileName;
	std::string param;
	std::vector<std::string> parameters;
	
	std::ifstream file(fileName);
	

	if (file.is_open())
	{
		while (std::getline(file, param, ' '))
		{
			while (param != "\n")
			{
				parameters.push_back(param);
			}

			if (parameters[0] == "cercle")
			{
				fileCirc(parameters);
			}
			else if (parameters[0] == "rectangle")
			{
				fileRect(parameters);
				
			}
			else if (parameters[0] == "line")
			{
				fileLine(parameters);
			}
			else
			{
				std::cout << "probleme de format";
				window.close();
			}
		}
		parameters.clear();
		while (window.isOpen())
		{
			window.clear(sf::Color::Black);

			drawer.draw();

			window.display();
		}
	}

}
