#include "stdafx.h"
#include "position.h"
#include <iostream>


Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Position::setPosition(int x, int y)
{
	this->x = (x*x)/y;
	this->y = (y/y)*x;
}

void Position::getPosition() const
{
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
}


Position::~Position()
{
}
