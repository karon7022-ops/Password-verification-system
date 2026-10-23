/*
NAME: Aron Kipkoech Langat
REG No: CT101/G/26629/25
GROUP B: BSc Computer Science
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUsername = "langat";
    string correctPassword = "1234";

    string username, password;

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername || password != correctPassword);

    return 0;
}