#include<iostream>
#include<string>

using namespace std;

int main() {
    string first_name;
    string second_name;
    cout << "Please input your first_name:" << endl;
    cin >> first_name;
    cout << "Please input your second_name:" << endl;
    cin >> second_name;
    cout << "-------------------------------"<< endl;
    cout << "Welcome to C++ " << first_name << " " << second_name << endl;
    return 0;
}