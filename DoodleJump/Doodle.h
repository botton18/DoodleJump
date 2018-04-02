#ifndef DOODLE_H
#define DOODLE_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"

using namespace std;

class Doodle : public Entity
{
private:
	bool scalenorm;
	bool scaleback;
public:
	Doodle(sf::Texture &t) : Entity(t) {scalenorm = true; scaleback = true;}

	void Shoot();

	void Hit();

	void Update();

	void Input();
};

#endif