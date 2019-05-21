#include <iostream>
#include <cstring>
#include "RecognizeCommand.h"
#include "Commands.h"

using std::cin;
using std::cout;
using std::endl;

char figure[20];

bool isOpened = false;

void recognizeCommand()
{
    char* firstCmd = new char[25];
    char* secondCmd = new char[80];
    if (!firstCmd || !secondCmd){
        cout << "A problem appeared :/" << endl;
        return;
    }

//Checking which command the user has entered
//If a command is found it sends all the information from the user's input to the command's function

    while(true){
    cin >> firstCmd;

    if (!strcmp(firstCmd, "open")) {
        isOpened = true;
        cout << "Open enter" << endl;
        cin >> secondCmd;
		open(secondCmd);
	}
    else if (!strcmp(firstCmd, "close")) {
        cout << "Close" << endl;
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
//		close();
        isOpened = false;
	}
	else if (!strcmp(firstCmd, "save")) {
        cout << "Save" << endl;
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
//		save();
	}
	else if (!strcmp(firstCmd, "saveas")) {
        cout << "SaveAs enter" << endl;
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
        cin >> secondCmd;
//		saveAs(secondCmd);
	}
    else if (!strcmp(firstCmd, "exit")) {
        cout << "Exit" << endl;
        delete[] firstCmd;
        delete[] secondCmd;
        return;
	}
    else if (!strcmp(firstCmd, "print")) {
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
        cout << "Print enter" << endl;
//		print();
	}
    else if (!strcmp(firstCmd, "create")) {
        cout << "Create enter" << endl;
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
//        recognizeData();
        cin >> secondCmd;
//		create();
	}
    else if (!strcmp(firstCmd, "erase")) {
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
        cout << "Erase enter" << endl;
        cin >> secondCmd;
//		eraseFigure();
	}
    else if (!strcmp(firstCmd, "translate")) {
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
        cout << "Translate enter" << endl;
        cin >> secondCmd;
//		translate();
	}
    else if (!strcmp(firstCmd, "within")) {
        if( !isOpened ){
            cout << "You haven't opened a file." << endl;
            continue;
        }
        cout << "Within enter" << endl;
        cin >> secondCmd;
//		within();
	}
	else {
		cout << "Unknown command. \n \n";
	}

    }
}
