#include <iostream>

using std::cin;
using std::cout;

int main() {
    int speed, time, distance_to_school;
    cin >> speed >> time >> distance_to_school;
    if (speed * time < distance_to_school) {
        cout << "no";
    } else {
        cout << "yes";
    }

    return 0;
}
