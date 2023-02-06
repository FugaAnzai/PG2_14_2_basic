#pragma once
class Vector2
{
public:
	float x, y;

public:

	Vector2() {
		x = 0;
		y = 0;
	}

	Vector2(float x,float y) {
		this->x = x;
		this->y = y;
	}

	Vector2& operator+(const Vector2& obj);
	Vector2& operator-(const Vector2& obj);

};

