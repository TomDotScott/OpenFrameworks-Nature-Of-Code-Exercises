#include "Vector2.h"

void Vector2::Add(Vector2 _other) {
	m_x += _other.m_x;
	m_y += _other.m_y;
}

void Vector2::Sub(Vector2 _other) {
	const float newX{ _other.m_x - m_x };
	const float newY{ _other.m_y - m_y };
	m_x = newX;
	m_y = newY;
}

void Vector2::Div(float _scalar)
{
	m_x /= _scalar;
	m_y /= _scalar;
}

void Vector2::Mult(float _scalar)
{
	m_x *= _scalar;
	m_y *= _scalar;
}

float Vector2::Mag() const
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}

float Vector2::SqrMag() const
{
	return pow(m_x, 2) + pow(m_y, 2);
}

void Vector2::Normalise()
{
	const float mag = Mag();
	m_x /= mag;
	m_y /= mag;
}

void Vector2::Limit(const float _limit)
{
	const float lengthSquared = SqrMag();
	if ((lengthSquared > _limit * _limit) && (lengthSquared > 0)) {
		const float ratio = _limit / sqrt(lengthSquared);
		m_x *= ratio;
		m_y *= ratio;
	}
}

float Vector2::Heading() const
{
	return atan(m_y / m_x);
}

void Vector2::Rotate(const float _angle)
{
	const Vector2 previous{ m_x, m_y };
	m_x = cos(_angle * previous.m_x) - sin(_angle * previous.m_y);
	m_y = sin(_angle * previous.m_x) + cos(_angle * previous.m_y);
}

float Vector2::Dist(const Vector2 _other) const
{
	return sqrt(pow(_other.m_x - m_x, 2) + pow(_other.m_y - m_x, 2));
}

float Vector2::SqrDist(const Vector2 _other) const
{
	return pow(_other.m_x - m_x, 2) + pow(_other.m_y - m_x, 2);
}

float Vector2::AngleBetween(const Vector2 _other) const
{
	return Dot(_other) / (Mag() * _other.Mag());
}

float Vector2::Dot(const Vector2 _other) const
{
	return (m_x * _other.m_x) + (m_y * _other.m_y);
}