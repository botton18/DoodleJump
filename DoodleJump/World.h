#ifndef WORLD_H
#define WORLD_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "Doodle.h"
#include "Platform.h"
using namespace std;

class World
{
private:
	Doodle doodle;
	vector<Platform*> p;

public:
	World(sf::Texture & d, sf::Texture & p);

	void GeneratePlatform();

	void Update();

	void drawAll(sf::RenderWindow & win);
};

#endif