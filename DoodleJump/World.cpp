#include <SFML\Graphics.hpp>
#include <vector>
#include "Doodle.h"
#include "Platform.h"
#include "World.h"

World::World(sf::Texture & d, sf::Texture & pl) : doodle(d)
{
	for (int i = 0; i < 6; ++i)
	{
		Platform *temp = new Platform(pl, i * 100, i * 100);
		p.push_back(temp);
	}
}

void World::GeneratePlatform()
{
	return;
}

void World::drawAll(sf::RenderWindow & win)
{
	doodle.draw(win);
	for (int i = 0; i < p.size(); ++i)
	{
		p.at(i)->draw(win);
	}
}
