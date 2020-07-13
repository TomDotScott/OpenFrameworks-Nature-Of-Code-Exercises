#pragma once
#include "ofMain.h"
#include "Vector2.h"
class Ball {
public:
	explicit Ball(const Vector2 _position, const Vector2 _velocity, const float _size, const float _topSpeed) : m_position(_position), m_currentVelocity(_velocity), m_size(_size), m_topSpeed(_topSpeed)
	{
		m_standardVelocity = m_currentVelocity;
		
		m_color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
	}
	void Update();
	void Draw();
	// void SetIsAccelerating(const bool _val) { m_isAccelerating = _val; }
	Vector2 m_position;
	Vector2 m_currentVelocity;
	float m_size{};
	float m_topSpeed{};
	
	Vector2 m_standardVelocity;
	Vector2 m_acceleration;
	
	bool m_isAccelerating{ false };
	ofColor m_color;
};

