#include<iostream>
using namespace std;

int main() {
    int  t;
    cin >> t;
        int a=0;
        int b=0;
        int c=0;
        for (int i = 0; i < t; i++) {
                 int ai, bi, ci;
            cin >> ai >> bi >> ci;
            a=a+ai;
            b=b+bi;
            c=c+ci;

        }
        if (a == 0 && b==0 && c==0) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }

}
