#include <iostream>
#include "Demon.hpp"

using namespace std;

void Demon::prettyPrint()
{
    cout << race<< " " << name << endl;
    cout << "LV: " << level << endl;
    cout << "HP: " << hp << "/" << hp << " MP: " << mp << "/" << mp << endl;
    cout << "St: " << st << endl;
    cout << "Ma: " << ma << endl;
    cout << "Vi: " << vi << endl;
    cout << "Ag: " << ag << endl;
    cout << "Lu: " << lu << endl;
    
    cout << "Affinities" << endl;
    for (auto it = affinities.begin(); it != affinities.end(); ++it) {
        cout << it->first << ": ";
        
        int size = it->second.size();
        for (int i = 0; i < size - 1; i++) {
            cout << it->second[i] << "/";
        }
        cout << it->second[size - 1] << endl;
    }

    cout << "Skills" << endl;
    for (auto it = skills.begin(); it != skills.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}