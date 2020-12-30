#include <iostream>

using std::cin;
using std::cout;

int main() {
    int speed, time, distance_to_school;
    cin >> speed >> time >> distance_to_school;
    if (speed * time < distance_to_school) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}
