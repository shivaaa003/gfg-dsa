#include<bits/stdc++.h>
using namespace std;
int trailingZero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return res;
}
int main(){
    cout<<"enter number";
    int n;
    cin>>n;
    cout<<"number of trailing zeros are "<<trailingZero(n);
    return 0;
}