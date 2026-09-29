#include <iostream>
using namespace std;

int main() {
    string name, gender;
    int age, restingHR;
    char isAthlete;

    cout << "====================================================" << endl;
    cout << "Hello and welcome to iHeart Health & Zone Analyzer!" << endl;
    cout << "====================================================" << endl;
    cout << endl;
    cout << "Please enter your name: " << endl;
    getline(cin,name);
    cout << "Please enter your gender (Male or Female)" << endl;
    cin >> gender;

    while (gender != "Male" && gender != "male" && gender != "Female" && gender != "female") {
        cout << "Please enter your gender" << endl;
        cin >> gender;
    }

    cout << "Please enter your age: " << endl;
    cin >> age;

    while (age <=0 || age > 150) {
            cout << "Please enter your age correctly!" << endl;
            cout << "Please enter your age" << endl;
            cin >> age;
    }

    cout << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Please enter your resting heart rate (BPM): ";
    cin >> restingHR;

    while (restingHR <= 0 || restingHR > 250) {
        cout << "Invalid BPM! Please enter a realistic resting heart rate: ";
        cin >> restingHR;
    }

    cout << endl;
    cout << "================= DIAGNOSTIC REPORT ================" << endl;
    cout << "User: " << name << " | Gender: " << gender << " | Age: " << age << endl;
    cout << "Resting Heart Rate: " << restingHR << " BPM" << endl;
    cout << "----------------------------------------------------" << endl;

    if (restingHR < 50) {
        cout << "Status: Bradycardia Flag (Low Resting Heart Rate)" << endl;
        cout << "Are you a conditioned endurance athlete? (Y/N): ";
        cin >> isAthlete;

        if (isAthlete == 'Y' || isAthlete == 'y') {
            cout << "Advice: A resting heart rate below 50 BPM is normal for athletes." << endl;
            cout << "        Your cardiovascular efficiency is in great shape!" << endl;
        } else {
            cout << "Advice: Warning! Low resting heart rate detected." << endl;
            cout << "        If you feel dizzy, fatigued, or weak, consider consulting a doctor." << endl;
        }
    }
    else if (restingHR <= 100) {
        cout << "Status: Normal & Healthy Resting Heart Rate" << endl;
        cout << "Advice: Your resting heart rate is within the healthy 50 - 100 BPM range." << endl;
        cout << "        Maintain your cardiovascular health with regular exercise and balanced sleep!" << endl;
    }
    else {
        cout << "Status: Tachycardia Flag (Elevated Resting Heart Rate)" << endl;
        cout << "Advice: Warning! Resting pulse exceeds 100 BPM." << endl;
        cout << "        This may indicate stress, dehydration, illness, or excess caffeine." << endl;
        cout << "        Take time to rest, hydrate, and monitor if this condition persists." << endl;
    }

    return 0;
}