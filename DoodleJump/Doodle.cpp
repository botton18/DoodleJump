#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"
#include "Doodle.h"


void Doodle::Shoot()
{
	return;
}

void Doodle::Hit()
{
	--life;
}