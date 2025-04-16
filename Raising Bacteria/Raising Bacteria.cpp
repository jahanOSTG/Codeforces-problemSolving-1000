#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int count = 0;

    while (x > 0) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = x - 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

