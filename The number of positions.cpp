#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int min_position = max(a + 1, n - b);
    int result = n - min_position + 1;

    cout << result << endl;

    return 0;
}
