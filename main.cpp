#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "====================================================" << endl;
    cout << "Hello and welcome to iHeart Health & Zone Analyzer!" << endl;
    cout << "====================================================" << endl;
    cout << endl;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Please enter your age: " << endl;
    cin >> age;
    while (age <=0 || age > 150) {
            cout << "Please enter your age correctly!" << endl;
            cout << "Please enter your age" << endl;
            cin >> age;
    }
    return 0;
}