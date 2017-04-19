#pragma once
class Position
{
	int x, y;
public:
	Position(int, int);
	void setPosition(int, int);
	void getPosition() const;
	friend void setX(Position &, int);
	~Position();
};

