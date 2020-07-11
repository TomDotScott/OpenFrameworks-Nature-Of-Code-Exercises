#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	/*m_position = Vector2(100, 100);
	m_velocity = Vector2(1, 3.3);*/
	for(int i = 0; i < 20; i++)
	{
		Vector2 randomPos = Vector2(ofRandom(0, static_cast<float>(ofGetWidth())), ofRandom(0, static_cast<float>(ofGetHeight())));
		Vector2 randomVel = Vector2(ofRandom(0, 500), ofRandom(0, 500)) / 100;
		float randomSize = ofRandom(10);
		m_balls.emplace_back(randomPos, randomVel, randomSize);
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for(auto& ball : m_balls)
	{
		ball.Update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(175);
	ofBackground(255);
	for(auto& ball : m_balls)
	{
		ball.Draw();
	}
	ofFill();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
