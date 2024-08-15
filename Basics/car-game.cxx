#include <iostream>

using namespace std;

int main(){
     // Starter
     string command = "";
     while(true) {
        cout << "> ";
        getline(cin,command);
        if(command == "start")
           cout << "Car is started..." << endl;
        else if(command == "stop")
            cout << "Car is stopped..." << endl;
        else if(command == "help")
            cout << "start - to start a car." << endl
                 << "stop - to stop a car." << endl
                 << "quit - to quit." << endl;
        else if(command == "quit")
            break;
        else cout << "I don't understand that..." << endl;
     }
     // Finished

    /* string command = "";
     bool isStarted = false;
     while(true) {
        cout << "> ";
        getline(cin,command);
        if(command == "start") {
            if(isStarted)
                cout << "Car is already started!" << endl;
            else {
                isStarted = true;
                cout << "Car is started..." << endl;
            }
        }

        else if(command == "stop") {
            if(!isStarted)
                cout << "Car is already stopped!" << endl;
            else {
                isStarted = false;
            cout << "Car is stopped..." << endl;
            }
        }
        else if(command == "help")
            cout << "start - to start a car." << endl
                 << "stop - to stop a car." << endl
                 << "quit - to quit." << endl;
        else if(command == "quit")
            break;
        else cout << "I don't understand that..." << endl;
     }*/
     return 0;
 }
l#include <iostream>

using namespace std;

int main(){
     // Starter
     /*string command = "";
     while(true) {
        cout << "> ";
        getline(cin,command);
        if(command == "start")
           cout << "Car is started..." << endl;
        else if(command == "stop")
            cout << "Car is stopped..." << endl;
        else if(command == "help")
            cout << "start - to start a car." << endl
                 << "stop - to stop a car." << endl
                 << "quit - to quit." << endl;
        else if(command == "quit")
            break;
        else cout << "I don't understand that..." << endl;
     }*/
     // Finished

     string command = "";
     bool isStarted = false;
     while(true) {
        cout << "> ";
        getline(cin,command);
        if(command == "start") {
            if(isStarted)
                cout << "Car is already started!" << endl;
            else {
                isStarted = true;
                cout << "Car is started..." << endl;
            }
        }

        else if(command == "stop") {
            if(!isStarted)
                cout << "Car is already stopped!" << endl;
            else {
                isStarted = false;
            cout << "Car is stopped..." << endl;
            }
        }
        else if(command == "help")
            cout << "start - to start a car." << endl
                 << "stop - to stop a car." << endl
                 << "quit - to quit." << endl;
        else if(command == "quit")
            break;
        else cout << "I don'lt understand that..." << endl;
     }
     return 0;
 }
