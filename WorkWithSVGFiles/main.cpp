/*
C++ Working with SVG files project

Sofia University, Faculty of Mathematics and Informatics
Object Oriented Programming course
summer semester 2015/2016

author: Magdalena Nikolova
*/

#include <iostream>
#include <cstring>
#include <fstream>
#include "Circle.h"
#include "Commands.h"
#include "Ellipse.h"
#include "RecognizeCommand.h"
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

int main() {

//list of all the commands possible for this program
    cout << "LIST OF COMMANDS: " << endl;
    cout << "open - opens the selected file" << endl;
    cout << "close - closes the current file" << endl;
    cout << "save - saves the changes that were made to the document" << endl;
    cout << "saveas - saves the changes in a file, whose path is chosen by the user" << endl;
    cout << "exit - exits the program" << endl;
    cout << "print - prints on the screen all the figures" << endl;
    cout << "create - creates new figure" << endl;
    cout << "erase - erases a figure" << endl;
    cout << "translate -  ????????????????" << endl;
    cout << "within - ????????????" << endl;
    cout << "_____________________________________" << endl;

    cout << "\n Enter a command: \n \n";

//    recognizeCommand();




    Rectangle a(10, 3, 6, 999, yellow);
    cout << a.getX() << a.getY() << a.getWidth() << a.getHeight() << a.getFillColor() << endl;
    Ellipse b(8, 22, 943, 9, blue);
    cout << b.getCx() << b.getCy() << b.getRx() << b.getRy() << b.getFillColor() << endl;
    Circle c(42, 5, 757, green);
    cout << c.getCx() << c.getCy() << c.getRx() << c.getFillColor() << endl;
    Shape d[3];
    d[0] = a;
    d[1] = b;
    d[2] = c;
    cout << d[2].getX() << endl;

    Shape anja(14, 92, yellow);
    cout << anja;

/*
	while (true){
        cin >> firstCmd;
        if (!strcmp(firstCmd, "exit")){
            cout << "Thanks for using our program :)" << endl;
            delete[] firstCmd;
            delete[] secondCmd;
            return 0;
        }
        else if (!strcmp(firstCmd, "close")){
            cout << "Close" << endl;
//          s.th.
            continue;
        }
        else if (!strcmp(firstCmd, "save")){
            cout << "Save" << endl;
//          s.th.
            continue;
        }
        else{
            cin >> secondCmd;
            recognizeCommand(firstCmd, secondCmd);
        }
        cout << "firstCmd: " << firstCmd << endl << "secondCmd: " << secondCmd << endl;
    }
*/
    cout << "Thanks for using our program :)" << endl;
    return 0;
}




/*
	while (repeat){
        cin.getline(tmpCommand, 100);
        const char *constCommand = tmpCommand;
        cout << "constCommand:" << constCommand << endl;
		repeat = recognizeCommand(constCommand);
		delete[] constCommand;
    }
*/
