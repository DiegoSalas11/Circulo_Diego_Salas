#include "ofApp.h"
#include "ofmath.h"
//--------------------------------------------------------------
void ofApp::setup() {
	
	pixeles.allocate(1024, 768, OF_PIXELS_RGB);
	textura.allocate(1024, 768, GL_RGB);
	for(int i=0 ; i<20 ;i++)
	{
		circle(ofRandom(250, ofGetWidth()-250), ofRandom(250, ofGetHeight()-250), 200, ofRandom(0,255), (0,255), (0,255));
	}
	
	//circleFill(ofGetWidth()/2,ofGetHeight()/2,200,0,255,0);
	
	
}

//--------------------------------------------------------------
void ofApp::update() {

	getPixel();
}

//--------------------------------------------------------------
void ofApp::draw() {
	textura.draw(0, 0);

}

void ofApp::putPixel(int x, int y, int red, int green, int blue)
{
	pixeles.setColor(x, y, (red, green, blue));
}

void ofApp::getPixel()
{
	textura.loadData(pixeles);
}

void ofApp::circle(int x0, int y0, int radioFM, int rojo, int verde, int azul)
{
	cout <<x0 << endl;
	cout << y0<< endl;
	cout << radioFM<< endl;
	cout <<y0+radioFM << endl;
	cout <<y0-radioFM << endl;
	cout <<x0+radioFM << endl;
	cout <<x0-radioFM << endl;


	
	/*putPixel(x0, (y0+radioFM) , 255, 255, 255);
	putPixel(x0, y0 -radioFM, 255, 255, 255);
	putPixel(x0+radioFM, y0, 255, 255, 255);
	putPixel(x0-radioFM, y0, 255, 255, 255);
*/
	int x = 0; int y = radioFM;

	/*int dse = (8 * x) + 20 - (8 * radioFM);
	int de = (8 * x) + 12;*/
	int d = (pow(x,2)) + (2 * x) + 1 - (y);


	while (x <= y)
	{

		
		if (d >= 0)
		{
			d += (2 * x) + 5 - (2 * y);
			y--;
		}
		else
		{
			d += (2 * x) + 12;
		}
		x++;
			
		putPixel(x0 + x, y0 + y, rojo, verde, azul);//a,b

		putPixel(x0 + y, y0 + x, rojo, verde, azul);//b,a

		putPixel(x0 + y, y0 - x, rojo, verde, azul);//b,-a

		putPixel(x0 + x, y0 - y, rojo, verde, azul);//a,-b

		putPixel(x0 - x, y0 - y, rojo, verde, azul);//-a,-b

		putPixel(x0 - y, y0 - x, rojo, verde, azul);//-b,-a

		putPixel(x0 - y, y0 + x, rojo, verde, azul);//-b,a

		putPixel(x0 - x, y0 + y, rojo, verde, azul);//-a,b

		/*int dse = (8 * x) + 20 - (8 * radioFM);
		int de = (8 * x) + 12;*/
		
		
	}// while
}
void ofApp::circleFill(int x0, int y0, int radioFM, int rojo, int verde, int azul)
{
	int radioLogico = radioFM - 1;
	while (radioLogico > 0)
	{
		circle(x0, y0, radioLogico, rojo, verde, azul);
		radioLogico--;
	}
}
//circle

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

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

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

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
