#include <iostream>
#include <cstring>
#include "Functions.h"

using std::cout;
using std::cin;
using std::endl;

void getFileInfo(char* input) {
	char rect[6] = "rect ";
	char ellipse[9] = "ellipse ";
	char circle[8] = "circle ";
	char x[4] = "x=\"";
	char y[4] = "y=\"";
	char height[9] = "height=\"";
	char width[8] = "width=\"";
	char cx[5] = "cx=\"";
	char cy[5] = "cy=\"";
	char r[4] = "r=\"";
	char rx[5] = "rx=\"";
	char ry[5] = "ry=\"";
	char fillC[7] = "fill=\"";
	int ix = 0, iy = 0, iheight = 0, iwidth = 0;
	int icx = 0, icy = 0, ir = 0, irx = 0, iry = 0;

	size_t len = strlen(input);
	cout << len << endl;
	short counter = 0, counter2 = 0, counter3 = 0;
	for (int i = 0; i < len; i++) {
		if (input[i] == rect[counter])
			++counter;
		if (input[i] == ellipse[counter2])
			++counter2;
		if (input[i] == circle[counter3])
			++counter3;

		//If it's a rectangle:
		if (counter == 5) {
			cout << "RECT" << endl;
			counter = 0;
			for (int j = 0; j < len; j++) {
				//                cout << "Inside x" << "\n turn" << j << endl;
				if (input[j] == x[counter])
					++counter;
				if (counter == 3 && input[j + 2] == '\"') {
					ix = input[j + 1] - '0';
					cout << "x=" << ix << endl;
					break;
				}
				else if (counter == 3 && input[j + 3] == '\"') {
					ix = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "x=" << ix << endl;
					break;
				}
				else if (counter == 3 && input[j + 4] == '\"') {
					ix = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "x=" << ix << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == y[counter])
					++counter;
				if (counter == 3 && input[j + 2] == '\"') {
					iy = input[j + 1] - '0';
					cout << "y=" << iy << endl;
					break;
				}
				else if (counter == 3 && input[j + 3] == '\"') {
					iy = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "y=" << iy << endl;
					break;
				}
				else if (counter == 3 && input[j + 4] == '\"') {
					iy = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "y=" << iy << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == height[counter])
					++counter;
				if (counter == 8 && input[j + 2] == '\"') {
					iheight = input[j + 1] - '0';
					cout << "height=" << iheight << endl;
					break;
				}
				else if (counter == 8 && input[j + 3] == '\"') {
					iheight = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "height=" << iheight << endl;
					break;
				}
				else if (counter == 8 && input[j + 4] == '\"') {
					iheight = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "height=" << iheight << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == width[counter])
					++counter;
				if (counter == 7 && input[j + 2] == '\"') {
					iwidth = input[j + 1] - '0';
					cout << "width=" << iwidth << endl;
					break;
				}
				else if (counter == 7 && input[j + 3] == '\"') {
					iwidth = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "width=" << iwidth << endl;
					break;
				}
				else if (counter == 7 && input[j + 4] == '\"') {
					iwidth = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "width=" << iwidth << endl;
					break;
				}
			}
			if (strstr(input, "green") != 0)
				cout << "green";
			return;

		}

		//If it's an ellipse:
		if (counter2 == 7) {
			cout << "ELLIPSE" << endl;
			for (int j = 0; j < len; j++) {
				if (input[j] == cx[counter])
					++counter;
				else
					counter = 0;
				if (counter == 4 && input[j + 2] == '\"') {
					icx = input[j + 1] - '0';
					cout << "cx=" << icx << endl;
					break;
				}
				else if (counter == 4 && input[j + 3] == '\"') {
					icx = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "cx=" << icx << endl;
					break;
				}
				else if (counter == 4 && input[j + 4] == '\"') {
					icx = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "cx=" << icx << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == cy[counter])
					++counter;
				else
					counter = 0;
				if (counter == 4 && input[j + 2] == '\"') {
					icy = input[j + 1] - '0';
					cout << "cy=" << icy << endl;
					break;
				}
				else if (counter == 4 && input[j + 3] == '\"') {
					icy = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "cy=" << icy << endl;
					break;
				}
				else if (counter == 4 && input[j + 4] == '\"') {
					icy = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "cy=" << icy << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == rx[counter])
					++counter;
				else
					counter = 0;
				if (counter == 4 && input[j + 2] == '\"') {
					irx = input[j + 1] - '0';
					cout << "rx=" << irx << endl;
					break;
				}
				else if (counter == 4 && input[j + 3] == '\"') {
					irx = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "rx=" << irx << endl;
					break;
				}
				else if (counter == 4 && input[j + 4] == '\"') {
					irx = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "rx=" << irx << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == ry[counter])
					++counter;
				else
					counter = 0;
				if (counter == 4 && input[j + 2] == '\"') {
					iry = input[j + 1] - '0';
					cout << "ry=" << iry << endl;
					break;
				}
				else if (counter == 4 && input[j + 3] == '\"') {
					iry = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "ry=" << iry << endl;
					break;
				}
				else if (counter == 4 && input[j + 4] == '\"') {
					iry = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "ry=" << iry << endl;
					break;
				}
				if (strstr(input, "yellow") != 0)
					cout << "yellow";
				else if (strstr(input, "orange") != 0)
					cout << "orange";
				else if (strstr(input, "red") != 0)
					cout << "red";
				else if (strstr(input, "blue") != 0)
					cout << "blue";
				else if (strstr(input, "green") != 0)
					cout << "green";
				else
					cout << "unknown color or no color";
				return;
			}
		}


		//If it's a circle:
		else if (counter3 == 6) {
			cout << "CIRCLE" << endl;
			for (int j = 0; j < len; j++) {
				if (input[j] == cx[counter])
					++counter;
				else
					counter = 0;
				if (counter == 4 && input[j + 2] == '\"') {
					icx = input[j + 1] - '0';
					cout << "cx=" << icx << endl;
					break;
				}
				else if (counter == 4 && input[j + 3] == '\"') {
					icx = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "cx=" << icx << endl;
					break;
				}
				else if (counter == 4 && input[j + 4] == '\"') {
					icx = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "cx=" << icx << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == cy[counter])
					++counter;
				else
					counter = 0;
				if (counter == 4 && input[j + 2] == '\"') {
					icy = input[j + 1] - '0';
					cout << "cy=" << icy << endl;
					break;
				}
				else if (counter == 4 && input[j + 3] == '\"') {
					icy = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "cy=" << icy << endl;
					break;
				}
				else if (counter == 4 && input[j + 4] == '\"') {
					icy = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "cy=" << icy << endl;
					break;
				}
			}
			counter = 0;
			for (int j = 0; j < len; j++) {
				if (input[j] == r[counter])
					++counter;
				else
					counter = 0;
				if (counter == 3 && input[j + 2] == '\"') {
					ir = input[j + 1] - '0';
					cout << "r=" << ir << endl;
					break;
				}
				else if (counter == 3 && input[j + 3] == '\"') {
					ir = (input[j + 1] - '0') * 10 + (input[j + 2] - '0');
					cout << "r=" << ir << endl;
					break;
				}
				else if (counter == 3 && input[j + 4] == '\"') {
					ir = (input[j + 1] - '0') * 100 + (input[j + 2] - '0') * 10 + input[j + 3] - '0';
					cout << "r=" << ir << endl;
					break;
				}
			}
			if (strstr(input, "yellow") != 0)
				cout << "yellow";
			else if (strstr(input, "orange") != 0)
				cout << "orange";
			else if (strstr(input, "red") != 0)
				cout << "red";
			else if (strstr(input, "blue") != 0)
				cout << "blue";
			else if (strstr(input, "green") != 0)
				cout << "green";
			else
				cout << "unknown color or no color";
			return;
		}
	}
	cout << "NO" << endl;


}
