#include <iostream>
#include <cstring>
#include <fstream>
#include <cstring>
#include "circle.h"
#include "Commands.h"
#include "Functions.h"
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

void open(char* path)
{
//If a file is already created then we get all of the information from it.
//If not then we create a new file with no content.

    ifstream SVGfileR(path, ios::in | ios::binary);

	if (!SVGfileR){
		ofstream SVGfileW(path, ios::app | ios::out);
        if (!SVGfileW){
		cout << "Something went wrong -_-" << endl;
		return;
        }
        cout << "Successfully created a new file " << path << endl;
        SVGfileW.close();
	}
    else
        cout << "Successfully opened " << path << endl;

    //Now we save the content of the file in a char*
    SVGfileR.seekg(0, ios::end);
    size_t ending = SVGfileR.tellg();
    SVGfileR.seekg(0, ios::beg);
    cout << "tellg: " << ending << endl;
    char input[2000];
    SVGfileR.read(input, ending);
//    SVGfileR >> input;
    SVGfileR.close();

    input[ending] = '\0';
    int len = strlen(input) + 1;
    cout << endl;

    //Getting the information from the file and saving it as objects
    char* svg = strstr(input, "<svg>");
    int index = (int)(svg - input);
    delete[] svg;
    cout << "ind: " << index << endl;

    //Separating each block of code for each shape
    int endOfShape, beginShape = index + 5;
    for (int i = beginShape; ; i++){
        if (input[i] == '<' && input[i+1] == '/' && input[i+2] == 's' && input[i+3] == 'v' && input[i+4] == 'g' && input[i+5] == '>')
            break;
        if (input[i] == '>'){
            endOfShape = i;
            char* tmpShape = new char[i - beginShape + 2];
            int counter = 0;
            for (int j = beginShape; j <= endOfShape; j++){
                tmpShape[counter] = input[j];
                cout << tmpShape[counter];
                counter++;
            }
            //Sending each block to a function, which will get the information needed
            getFileInfo(tmpShape);
            counter = 0;
            beginShape = endOfShape + 1;
            cout << i << endl;
            delete[] tmpShape;
        }
    }
}

void Commands::counter(){
    anja++;
}




/*
	//Counting the baskets that have been entered so far
	int beginning = basketsFileR.tellg();
	basketsFileR.seekg(0, ios::end);
	int ending = basketsFileR.tellg();
	playersCounter = ending / beginning;
*/
