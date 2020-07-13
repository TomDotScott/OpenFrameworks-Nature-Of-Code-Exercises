#pragma once
#include <iostream>

class Vector2 {
public:
	Vector2(const float _x = 0, const float _y = 0) : m_x(_x), m_y(_y){};
	float m_x;
	float m_y;
	// Add vectors
	void Add(Vector2 _other);
	// Subtract vectors
	void Sub(Vector2 _other);
	// Scale the vector with division
	void Div(float _scalar);
	// Scale the vector with multiplication
	void Mult(float _scalar);
	// Calculate the magnitude of the vector
	float Mag() const;
	// Calculate the Square magnitude of the vector
	float SqrMag() const;
	// Normalise the vector to unit length 1
	void Normalise();
	// Limit the magnitude of the vector
	void Limit(float _limit);
	// The 2D heading of a vector expressed as an angle
	float Heading() const;
	// Rotate a 2D vector by an angle
	void Rotate(float _angle);
	// Euclidean distance between vectors
	float Dist(Vector2 _other) const;
	// Square Euclidean distance between vectors
	float SqrDist(Vector2 _other) const;
	// The angle between vectors
	float AngleBetween(Vector2 _other) const;
	// The Dot Product
	float Dot(Vector2 _other) const;
};

inline Vector2 operator +(Vector2& _lhs, Vector2& _rhs) {
	return Vector2(_lhs.m_x + _rhs.m_x, _lhs.m_y + _rhs.m_y);
}

inline Vector2 operator +=(Vector2& _lhs, Vector2& _rhs) {
	return Vector2(_lhs.m_x += _rhs.m_x, _lhs.m_y += _rhs.m_y);
}

inline Vector2 operator -(Vector2& _lhs, Vector2& _rhs) {
	return Vector2(_rhs.m_x - _lhs.m_x, _rhs.m_y - _lhs.m_y);
}

inline Vector2 operator *(Vector2 _lhs, const float _rhs)
{
	return Vector2(_lhs.m_x * _rhs, _lhs.m_y * _rhs);
}

inline Vector2 operator /(Vector2 _lhs, const float _rhs) {
	return Vector2(_lhs.m_x / _rhs, _lhs.m_y / _rhs);
}

inline bool operator <(Vector2 _lhs, Vector2 _rhs) {
	return _lhs.SqrMag() < _rhs.SqrMag();
}

inline bool operator >(Vector2 _lhs, Vector2 _rhs) {
	return _lhs.SqrMag() > _rhs.SqrMag();
}

inline bool operator >=(Vector2 _lhs, Vector2 _rhs) {
	return (_lhs.SqrMag() > _rhs.SqrMag()) || (_lhs.m_x == _rhs.m_x && _lhs.m_y == _rhs.m_y);
}

inline bool operator <=(Vector2 _lhs, Vector2 _rhs) {
	return (_lhs.SqrMag() < _rhs.SqrMag()) || (_lhs.m_x == _rhs.m_x && _lhs.m_y == _rhs.m_y);
}

inline bool operator ==(Vector2 _lhs, Vector2 _rhs) {
	return _lhs.m_x == _rhs.m_x && _lhs.m_y == _rhs.m_y;
}

inline bool operator !=(Vector2 _lhs, Vector2 _rhs) {
	return !(_lhs == _rhs);
}

inline const std::ostream& operator <<(std::ostream& _os, Vector2& _v) {
	_os << "X: " << _v.m_x << " Y: " << _v.m_y << std::endl;
	return _os;
}