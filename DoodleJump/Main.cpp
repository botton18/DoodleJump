#include <SFML/Graphics.hpp>
#include "Entity.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	sf::Texture texture;
	texture.loadFromFile("images/doodle.png");
	
	sf::Sprite sprite(texture);
	Entity h(texture);
	sprite.setPosition(sf::Vector2f(100.f, 100.f));
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//sprite.move(0.01, 0.011);
		h.SetPosition(10, 100);
		window.clear();
		//window.draw(shape);
		//window.draw(sprite);
		h.draw(window);
		window.display();
	}

	return 0;
}