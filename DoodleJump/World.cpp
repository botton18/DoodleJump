#include <SFML/Graphics.hpp>
#include <vector>
#include "Doodle.h"
#include "Platform.h"
#include "World.h"

World::World(sf::Texture & d, sf::Texture & pl, sf::Texture & bg) : doodle(d)
{
	for (int i = 0; i < 6; ++i)
	{
		Platform *temp = new Platform(pl, i * 100, i * 100);
		p.push_back(temp);
	}
	Platform *temp = new Platform(pl, 30, 400);
	p.push_back(temp);
	tex = bg;
	Background = sf::Sprite(tex);
	isfalling = true;
}

void World::GeneratePlatform()
{
	return;
}

void World::Update()
{
	doodle.Input();
	if(isfalling)
	{
		if(doodle.getPos().y < 400)
		{
			doodle.Walk(0,0.5);
			//cout << "Hit" << endl;
			if(doodle.getPos().y >= 400)
			{
				//cout << "Hit " << endl;
				isfalling = false;
			}
		}
	}
	else if(!isfalling)
	{
		if(doodle.getPos().y > 50)
		{
			doodle.Walk(0,-0.5);
			//cout << " Hit " << endl;
			if(doodle.getPos().y <= 50)
			{
				isfalling = true;
			}
		}
	}

}

void World::drawAll(sf::RenderWindow & win)
{
	win.draw(Background);
	doodle.draw(win);
	for (int i = 0; i < p.size(); ++i)
	{
		p.at(i)->draw(win);
	}
}
