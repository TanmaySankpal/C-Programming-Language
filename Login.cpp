#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string username, password;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    if (username == "admin" && password == "password") 
    {
        cout << "Welcome, admin!" << endl;
    } 
    else
    {
        cout << "Incorrect login. Please try again." << endl;
    }

    return 0;
}
