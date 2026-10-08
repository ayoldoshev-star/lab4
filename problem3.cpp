#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
