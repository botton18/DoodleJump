#ifndef PLATFORM_H
#define PLATFORM_H
#include <SFML\Graphics.hpp>

class Platform
{
private:
	sf::Texture tex;
	sf::Sprite sprite;
	sf::Vector2f Pos;

public:
	Platform(sf::Texture &t, float a, float b);

	void SetPosition(float a, float b);

	void SetPosition(sf::Vector2f p);

	void draw(sf::RenderWindow & win);
};

#endif