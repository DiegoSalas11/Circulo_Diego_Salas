#pragma once

#include "ofMain.h"
#include"ofMath.h"

class ofApp : public ofBaseApp {

public:
	//int x, y;, x0, y0,radioFM;

	ofTexture textura;
	ofPixels pixeles;
	void putPixel(int x, int y, int red, int green, int blue);
	void getPixel();
	void circle(int x0 , int y0, int radioFM, int rojo, int verde , int azul);
	void circleFill(int x0, int y0, int radioFM, int rojo, int verde, int azul);


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


};
