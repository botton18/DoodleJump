#ifndef DOODLE_H
#define DOODLE_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"

using namespace std;

class Doodle : public Entity
{
public:
	Doodle(sf::Texture &t) : Entity(t) {}

	void Shoot();

	void Hit();
};

#endif