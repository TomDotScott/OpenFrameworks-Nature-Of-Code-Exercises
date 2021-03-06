#include "Ball.h"

void Ball::Update() {

	// NORMALISE THE VECTOR
	m_direction.Normalise();
	// SCALE THE VECTOR
	m_direction.Mult(0.5f);

	m_acceleration = m_direction;
	
	/*m_currentVelocity.m_x > 0 ? m_currentVelocity.m_x += abs(m_acceleration.m_x) : m_currentVelocity.m_x -= abs(m_acceleration.m_x);
	m_currentVelocity.m_y > 0 ? m_currentVelocity.m_y += abs(m_acceleration.m_y) : m_currentVelocity.m_y -= abs(m_acceleration.m_y);*/
	m_currentVelocity.Add(m_acceleration);

	m_currentVelocity.Limit(m_topSpeed);


	m_position.Add(m_currentVelocity);

	if (m_position.m_x > static_cast<float>(ofGetWidth()) || m_position.m_x < 0) {
		m_currentVelocity.m_x *= -1;
	}

	if (m_position.m_y > static_cast<float>(ofGetHeight()) || m_position.m_y < 0) {
		m_currentVelocity.m_y *= -1;
	}
}

void Ball::Draw() {
	ofSetColor(m_color);
	ofDrawEllipse(m_position.m_x, m_position.m_y, m_size, m_size);
	ofFill();
}
