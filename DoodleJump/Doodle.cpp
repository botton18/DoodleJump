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

void Doodle::Input()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		Pos.x += 1;
		if(scalenorm == true)
		{
			//sprite.scale(-1.f,1.f);
			sprite.setTextureRect(sf::IntRect(sprite.getGlobalBounds().width, 0, -sprite.getGlobalBounds().width, sprite.getGlobalBounds().height));

			scalenorm = false;
		}

	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		Pos.x -= 1; 

		if(scalenorm == false)
		{	
			//sprite.setTextureRect(sf::IntRect(sprite.getGlobalBounds().width, 0, -sprite.getGlobalBounds().width, sprite.getGlobalBounds().height));
			sprite.setTextureRect(sf::IntRect(0, 0, sprite.getGlobalBounds().width, sprite.getGlobalBounds().height));

			scalenorm = true;
		}
		//Sprite.Scale(-1.f,1.f
	}

}
