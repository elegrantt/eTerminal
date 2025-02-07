#include <iostream>
#include <thread>
#include <chrono>
using namespace std;


int main() {
    bool newUser = true;
    string inputpass = "NULL";
    string username = "NULL";
    string password = "NULL";
    string userInput = "NULL";
    string command = "NULL";
    login:
    cout << "Hello, user! Your experience is loading..." << endl;
    if (newUser == true) {
        cout << "Please enter your new username." << endl;
        getline(cin, username);
        cout << "Please enter your new password." << endl;
        getline(cin, password);
        cout << "Account created successfully!" << endl;
        cout << "Please sign in." << endl;
        newUser = false;
        goto login;
    }
    if (newUser == false) {
        cout << "Please enter your password, " << username << "." << endl << "Or type 'out' to sign out." << endl;
        getline(cin, inputpass);
        checkpass:
        if (inputpass == "out") {
            newUser = true;
            cout << "You have successfully signed out." << endl;
            goto login;
        } else if (inputpass != password) {
            cout << "Password incorrect. Please try again." << endl;
            getline(cin, inputpass);
            goto checkpass;
        } else if (inputpass == password) {
            cout << "Password accepted." << endl;
            goto signedin;
        }
    }
    signedin:
    int i = 0;
    while (i<100) {
        cout << "\n";
        i++;
    }
    cout << "Hello, " << username << "!" << endl; 
    cout << "Welcome to eTerminal Home." << endl;
    cout << "Type 'help' for a list of commands." << endl;
    terminal:
    cout << "[" << username << "@eTerminal] >> ";
    getline(cin, command);
    if (command == "help") {
        cout << "'term - shows terminal information." << endl;
        cout << "'help' - shows a list of commands." << endl;
        cout << "'clear' - clears the terminal." << endl;
        cout << "'out' - signs out of eTerminal." << endl;
        cout << "'linux' - changes the style of the terminal to a Linux terminal." << endl;
        cout << "'echo [string]' - prints the string inputted." << endl;
        cout << "'exit' - exits the terminal." << endl;
        goto terminal;
    } else if (command.find("echo ") != string::npos) {
        cout << command.substr(5) << endl;
        goto terminal;
    } else if (command == "exit") {
        goto end;
    } else if (command == "") {
        goto terminal;
    } else if (command == "out") {
        cout << "It's sad to see you go..." << endl;
        goto login;
    } else if (command == "linux") {
        cout << "Type 'term' to go back to the default style." << endl;
        goto linuxterm;
    } else if (command == "term") {
        cout << "eTerminal v1.0" << endl;
        cout << "Developed by Ekansh Rawal" << endl;
        cout << "This software is and always will be free and open-source." << endl;
        goto terminal;
    } else if (command == "clear") {
        int i = 0;
        while (i<100) {
            cout << "\n";
            i++;
        }
        goto terminal;
    } else {
        cout << "Command not found." << endl;
        goto terminal;
    }








    linuxterm:
    cout << "[" << username << "@linuxterminal]$ ";
    getline(cin, command);
    if (command == "help") {
        cout << "'term - shows terminal information." << endl;
        cout << "'help' - shows a list of commands." << endl;
        cout << "'clear' - clears the terminal." << endl;
        cout << "'linux' - changes the style of the terminal to a Linux terminal." << endl;
        cout << "'echo [string]' - prints the string inputted." << endl;
        cout << "'exit' - exits the terminal." << endl;
        goto linuxterm;;
    } else if (command.find("echo ") != string::npos) {
        cout << command.substr(5) << endl;
        goto linuxterm;;
    } else if (command == "exit") {
        goto end;
    } else if (command == "") {
        goto linuxterm;;
    } else if (command == "linux") {
        cout << "Type 'term' to go back to the default style." << endl;
        goto linuxterm;
    } else if (command == "term") {
        cout << "eTerminal v1.0" << endl;
        cout << "Developed by Ekansh Rawal" << endl;
        cout << "This software is and always will be free and open-source." << endl;
        goto terminal;
    } else if (command == "clear") {
        int i = 0;
        while (i<100) {
            cout << "\n";
            i++;
        }
        goto linuxterm;;
    } else {
        cout << "Command not found." << endl;
        goto linuxterm;;
    }



    end:
    return 0;
}
