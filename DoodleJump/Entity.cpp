#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"
using namespace std;

Entity::Entity(sf::Texture & tex)
{
	texture = tex;
	sprite = sf::Sprite(texture);
	life = 1;
	Pos = sf::Vector2f(10, 100);
}

void Entity::SetPosition(float x, float y)
{
	Pos = sf::Vector2f(x, y);
}

void Entity::SetPosition(sf::Vector2f p)
{
	Pos = p;
}

sf::Sprite Entity::getSprite()
{
	return sprite;
}

void Entity::Walk(float x, float y)
{
	Pos.x += x;
	Pos.y += y;
}

sf::Vector2f Entity::getPos()
{
	return Pos;
}

void Entity::draw(sf::RenderWindow & win)
{
	sprite.setPosition(Pos);
	win.draw(this->sprite);
}