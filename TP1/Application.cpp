#include "Application.h"

Application::Application()
	:window(sf::VideoMode(1000,1000), "TP trop bien"), drawer()
{
}

void Application::run()
{
	std::string fileName;
	std::cout << "Nom du fichier de formes à dessiner : ";
	std::cin >> fileName;
	std::ifstream file(fileName);
	
	std::string param;
	std::vector<std::string> parameters;
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
				int rf = 0, gf = 0, bf = 0, re = 0, ge = 0, be = 0;

				std::stringstream iss1(parameters[6]);
				iss1.ignore(1, 'rgb(');
				iss1 >> re;
				iss1.ignore(1, ',');
				iss1 >> ge;
				iss1.ignore(1, ',');
				iss1 >> be;

				std::stringstream iss2(parameters[7]);
				iss2.ignore(1, 'rgb(');
				iss2 >> rf;
				iss2.ignore(1, ',');
				iss2 >> gf;
				iss2.ignore(1, ',');
				iss2 >> bf;

				drawer.addCircle(window,
					std::stoi(parameters[2]), std::stoi(parameters[3]), std::stoi(parameters[4]), std::stoi(parameters[5]),
					sf::Color(rf, gf, bf), sf::Color(re, ge, be));
			}
			else if (parameters[0] == "rectangle")
			{
				int rf = 0, gf = 0, bf = 0, re = 0, ge = 0, be = 0;

				std::stringstream iss1(parameters[7]);
				iss1.ignore(1, 'rgb(');
				iss1 >> re;
				iss1.ignore(1, ',');
				iss1 >> ge;
				iss1.ignore(1, ',');
				iss1 >> be;

				std::stringstream iss2(parameters[8]);
				iss2.ignore(1, 'rgb(');
				iss2 >> rf;
				iss2.ignore(1, ',');
				iss2 >> gf;
				iss2.ignore(1, ',');
				iss2 >> bf;

				drawer.addRectangle(window,
					std::stoi(parameters[2]), std::stoi(parameters[3]), std::stoi(parameters[4]), std::stoi(parameters[5]), std::stoi(parameters[6]),
					sf::Color(rf, gf, bf), sf::Color(re, ge, be));
			}
			else if (parameters[0] == "line")
			{
				int rf = 0, gf = 0, bf = 0, re = 0, ge = 0, be = 0;

				std::stringstream iss1(parameters[7]);
				iss1.ignore(1, 'rgb(');
				iss1 >> re;
				iss1.ignore(1, ',');
				iss1 >> ge;
				iss1.ignore(1, ',');
				iss1 >> be;

				drawer.addLine(window,
					std::stoi(parameters[2]), std::stoi(parameters[3]), std::stoi(parameters[4]), std::stoi(parameters[5]), std::stoi(parameters[6]),
					sf::Color(re, ge, be));
			}
		}
		parameters.clear();
		while (window.isOpen())
		{
			window.clear(sf::Color::Black);

			//test1->draw();
			//test2->draw();
			drawer.draw();

			window.display();
		}
	}

}
