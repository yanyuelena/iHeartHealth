#include <iostream>
using namespace std;

int main() {
    string name, gender;
    int age;

    cout << "====================================================" << endl;
    cout << "Hello and welcome to iHeart Health & Zone Analyzer!" << endl;
    cout << "====================================================" << endl;
    cout << endl;
    cout << "Please enter your name: " << endl;
    getline(cin,name);
    cout << "Please enter your gender (Male or Female)" << endl;
    cin >> gender;
    while (gender != tolower(male) || gender != tolower(female)) {
        cout << "Please enter your gender" << endl;
    }
    cout << "Please enter your age: " << endl;
    cin >> age;
    while (age <=0 || age > 150) {
            cout << "Please enter your age correctly!" << endl;
            cout << "Please enter your age" << endl;
            cin >> age;
    }
    return 0;
}