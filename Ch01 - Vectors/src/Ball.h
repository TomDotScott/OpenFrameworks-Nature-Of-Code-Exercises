#pragma once
#include "Vector2.h"
class Ball {
public:
	explicit Ball(Vector2 _position, Vector2 _velocity, float _size) : m_position(_position), m_velocity(_velocity), m_size(_size){}
	void Update();
	void Draw();
private:
	Vector2 m_position;
	Vector2 m_velocity;
	float m_size{};
};

