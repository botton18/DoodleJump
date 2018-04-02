#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Platform.h"
#include "Doodle.h"
#include "World.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 533), "Doodle Jump!");

	sf::Texture doodle_texture;
	sf::Texture platform_texture;
	sf::Texture background_texture;

	doodle_texture.loadFromFile("images/doodle.png");
	platform_texture.loadFromFile("images/platform.png");
	background_texture.loadFromFile("images/background.png");

	World world(doodle_texture, platform_texture, background_texture);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		world.Update();
		window.clear();
		//draw
		world.drawAll(window);

		window.display();
	}

	return 0;
}