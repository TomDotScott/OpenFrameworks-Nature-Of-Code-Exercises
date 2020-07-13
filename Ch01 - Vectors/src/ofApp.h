#pragma once
#include "ofMain.h"
#include "Vector2.h"
#include "Ball.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
private:
	Vector2 dir;
	// Ball m_ball{ {100, 100}, {3, 3}, 30, 20 };
	bool mouseOnScreen{ false };
	std::vector<Ball> m_balls;
};
