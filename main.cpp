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

    while (age <=0 || age > 130) {
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

    float maxHR = 220 - age;
    int zoneChoice;
    cout << "\n================ TRAINING ZONE ADVISOR ===============" << endl;
    cout << "Estimated Maximum Heart Rate (220 - age): " << maxHR << " BPM" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Select your workout goal to view target heart rate:" << endl;
    cout << "1. Zone 1 - Warm-up & Recovery (50% - 60% of Max HR)" << endl;
    cout << "2. Zone 2 - Fat Burn & Aerobic Base (60% - 70% of Max HR)" << endl;
    cout << "3. Zone 3 - Cardio Endurance (70% - 80% of Max HR)" << endl;
    cout << "4. Zone 4 - Anaerobic Peak & High Intensity (80% - 90% of Max HR)" << endl;
    cout << "Enter your choice (1 - 4): ";
    cin >> zoneChoice;

    while (zoneChoice < 1 || zoneChoice > 4) {
        cout << "Invalid choice! Please enter a number between 1 and 4: ";
        cin >> zoneChoice;
    }

    cout << "\n------------------ ZONE RECOMMENDATION -------------" << endl;

    switch (zoneChoice) {
        case 1:
            cout << "Goal: Zone 1 (Warm-up / Active Recovery)" << endl;
            cout << "Target Heart Rate: " << (int)(maxHR * 0.50) << " - " << (int)(maxHR * 0.60) << " BPM" << endl;
            cout << "Workout Advice: Ideal for warming up, cool-downs, and light walking." << endl;
            break;

        case 2:
            cout << "Goal: Zone 2 (Fat Burn & Aerobic Base)" << endl;
            cout << "Target Heart Rate: " << (int)(maxHR * 0.60) << " - " << (int)(maxHR * 0.70) << " BPM" << endl;
            cout << "Workout Advice: Builds mitochondrial base and burns fat efficiently." << endl;
            cout << "                You should be able to maintain a conversation easily." << endl;
            break;

        case 3:
            cout << "Goal: Zone 3 (Cardio Endurance)" << endl;
            cout << "Target Heart Rate: " << (int)(maxHR * 0.70) << " - " << (int)(maxHR * 0.80) << " BPM" << endl;
            cout << "Workout Advice: Improves stamina, lung capacity, and heart strength." << endl;
            cout << "                Speaking becomes harder; moderate to heavy breathing." << endl;
            break;

        case 4:
            cout << "Goal: Zone 4 (Anaerobic Peak / High Intensity)" << endl;
            cout << "Target Heart Rate: " << (int)(maxHR * 0.80) << " - " << (int)(maxHR * 0.90) << " BPM" << endl;
            cout << "Workout Advice: Best for speed intervals and maximum sprint power." << endl;
            cout << "                Do not sustain this zone for too long without resting." << endl;
            break;

        default:
            cout << "Invalid zone selected! Defaulting to General Cardio:" << endl;
            cout << "Target Heart Rate: " << (int)(maxHR * 0.60) << " - " << (int)(maxHR * 0.80) << " BPM" << endl;
            break;
    }
    cout << "\n================== SESSION SUMMARY =================" << endl;
    cout << "Summary for " << name << " (" << gender << ", " << age << " y/o):" << endl;
    cout << "- Resting Heart Rate: " << restingHR << " BPM" << endl;
    cout << "- Max Heart Rate:     " << maxHR << " BPM" << endl;
    cout << "- Assessment complete. Stay active and train safe!" << endl;
    cout << "====================================================" << endl;

    return 0;
}
