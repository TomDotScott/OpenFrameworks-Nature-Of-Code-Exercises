#include "Ball.h"
#include "ofMain.h"

void Ball::Update()
{
	m_position += m_velocity;
	if (m_position.m_x > static_cast<float>(ofGetWidth()) || m_position.m_x < 0) {
		m_velocity.m_x *= -1;
	}

	if (m_position.m_y > static_cast<float>(ofGetHeight()) || m_position.m_y < 0) {
		m_velocity.m_y *= -1;
	}
}

void Ball::Draw()
{
	ofDrawEllipse(m_position.m_x, m_position.m_y, m_size, m_size);
}
