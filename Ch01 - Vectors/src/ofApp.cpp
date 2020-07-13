#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	///*m_position = Vector2(100, 100);
	//m_velocity = Vector2(1, 3.3);*/
	//for (int i = 0; i < 20; i++) {
	//	Vector2 randomPos = Vector2(ofRandom(0, static_cast<float>(ofGetWidth())), ofRandom(0, static_cast<float>(ofGetHeight())));
	//	Vector2 randomVel = Vector2(ofRandom(0, 500), ofRandom(0, 500)) / 100;
	//	float randomSize = ofRandom(50);
	//	m_balls.emplace_back(randomPos, randomVel, randomSize, 20);
	//}
}

//--------------------------------------------------------------
void ofApp::update() {

	// NORMALISE THE VECTOR
	dir.Normalise();
	// SCALE THE VECTOR
	dir.Mult(0.5f);

	// ASSIGN IT TO THE ACCELERATION
	if (mouseOnScreen) {
		m_ball.m_acceleration = dir;
	}
	
	m_ball.Update();


	/*for (auto& ball : m_balls) {
		ball.Update();
	}*/
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(255);
	m_ball.Draw();
	/*
	for (auto& ball : m_balls) {
		ball.Draw();
	}*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	/*if (key == ' ') {
		for (auto& ball : m_balls) {
			ball.SetIsAccelerating(true);
		}
	}*/
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	/*if (key == ' ') {
		for (auto& ball : m_balls) {
			ball.SetIsAccelerating(false);
		}
	}*/
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
	// std::cout << x << y << std::endl;
	// COMPUTE THE DIRECTION
	Vector2 mouse(x, y);
	dir = m_ball.m_position - mouse;

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
	mouseOnScreen = true;
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
	mouseOnScreen = false;
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
