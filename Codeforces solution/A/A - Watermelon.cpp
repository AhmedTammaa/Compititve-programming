#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    if(n==2){
        goto k;
    }
    if (n%2==0){
        cout<<"YES";
        return 0;
    }
    k:
    
    cout <<"NO";
}