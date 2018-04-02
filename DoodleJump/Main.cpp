#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Platform.h"
#include "Doodle.h"
#include "World.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

	sf::Texture doodle_texture;
	sf::Texture platform_texture;

	doodle_texture.loadFromFile("images/doodle.png");
	platform_texture.loadFromFile("images/platform.png");

	World world(doodle_texture, platform_texture);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		

		window.clear();
		//draw
		world.drawAll(window);


		window.display();
	}

	return 0;
}