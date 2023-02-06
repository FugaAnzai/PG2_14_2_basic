#include "Vector2.h"

Vector2& Vector2::operator+(const Vector2& obj) {
	Vector2 result;
	result.x = x + obj.x;
	result.y = y + obj.y;
	return result;
}

Vector2& Vector2::operator-(const Vector2& obj) {
	Vector2 result;
	result.x = x - obj.x;
	result.y = y - obj.y;
	return result;
}
