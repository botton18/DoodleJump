#include <SFML/Graphics.hpp>
#include <iostream>
#include "Platform.h"

using namespace std;

Platform::Platform(sf::Texture & t, float a, float b)
{
	tex = t;
	sprite = sf::Sprite(tex);
	this->SetPosition(a, b);
	
	//cout << a << " " << b << endl;
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
	//cout << Pos.x << " " << Pos.y << endl;
	sprite.setPosition(Pos);
	win.draw(sprite);
}