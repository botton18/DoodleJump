Run: Main
	./a.out

Main: World 
	g++ Main.cpp World.o Platform.o Doodle.o Entity.o -lsfml-graphics -lsfml-window -lsfml-system

World: Platform World.h World.cpp
	g++ -c World.cpp

Platform: Doodle Platform.h Platform.cpp
	g++ -c Platform.cpp

Doodle: Entity Doodle.h Doodle.cpp
	g++ -c Doodle.cpp

Entity: Entity.h Entity.cpp
	g++ -c Entity.cpp