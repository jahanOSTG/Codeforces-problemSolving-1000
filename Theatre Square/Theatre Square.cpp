#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long m, n, a;
    cin >> m >> n >> a;

    long row = ceil((double)m / a);
    long col = ceil((double)n / a);

    long long result = (long long)row * col;
    cout << result << endl;

    return 0;
}
