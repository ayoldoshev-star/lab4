#include <iostream>

using namespace std;
int main() { char h1, h2, colon, m1, m2; cin >> h1 >> h2 >> colon >> m1 >> m2;
    int hours;
    if (h1 == '?' && h2 == '?') {
        hours = 24;
    } else if (h1 == '?') {
        if (h2 <= '3') hours = 3;
        else hours = 2;
    } else if (h2 == '?') {
        if (h1 == '2') hours = 4;
        else hours = 10;
    } else {
        hours = 1;
    }
    int minutes;
    if (m1 == '?' && m2 == '?') minutes = 60;
    else if (m1 == '?') minutes = 6;
    else if (m2 == '?') minutes = 10;
    else minutes = 1;

    cout << hours * minutes << endl;
    return 0;
}
