#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Entity
{
protected:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f Pos;
	int life;

public:
	Entity(sf::Texture & tex);

	void SetPosition(float x, float y);
	
	void SetPosition(sf::Vector2f p);

	void draw(sf::RenderWindow & win);

	void Walk(float x, float y);

	sf::Vector2f getPos();

	sf::Sprite getSprite();

	virtual void Shoot()
	{
		return;
	}

	virtual void Hit()
	{
		return;
	}
};

#endif