// ConstatnClassesAndMethods.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "position.h"


int main()
{
	Position dog(10, 50);
	dog.getPosition();
	
	dog.setPosition(66, 75);

	dog.getPosition();

	const Position house(400, 600);

	house.getPosition();


	system("pause");
    return 0;
}

