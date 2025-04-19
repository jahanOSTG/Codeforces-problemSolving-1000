#include<iostream>
using namespace std;

int main() {
    string t;
    cin >> t;

    int j = 0;
    string s = "hello";

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == s[j]) {
            j++;
        }

        if (j == s.length()) {
            break;
        }
    }

    if (j == s.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
