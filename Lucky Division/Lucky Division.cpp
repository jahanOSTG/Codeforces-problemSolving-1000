#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int lucky[]={4,7,44,77,47,74,444,777,477,747,774,744,474,447};
    for(int i=0;i<14;i++){
        if(x%lucky[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }

            cout<<"NO"<<endl;


}
