#pragma once
#include "ofMain.h"
#include "opencv2/opencv.hpp"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	cv::VideoCapture cap;
	cv::Size cap_size;
	int number_of_frames;
	vector<cv::Mat> frame_list;

	float rect_size;
	vector<float> draw_rect_size_list;
	vector<cv::Mat> rect_frame_list;
	vector<unique_ptr<ofImage>> rect_image_list;
	vector<cv::Rect> cv_rect_list;
};