#include <SFML\Graphics.hpp>
#include "Platform.h"

Platform::Platform(sf::Texture & t, float a, float b)
{
	tex = t;
	sprite = sf::Sprite(tex);
	this->SetPosition(a, b);
}

void Platform::SetPosition(float a, float b)
{
	Pos = sf::Vector2f(a, b);
}

void Platform::SetPosition(sf::Vector2f p)
{
	Pos = p;
}

void Platform::draw(sf::RenderWindow & win)
{
	win.draw(sprite);
}