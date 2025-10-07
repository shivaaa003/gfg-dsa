#include<bits/stdc++.h>
using namespace std;
int countdigit(long long n){
    int res=0;
    while(n>0){
        n=n/10;
        res++;
    }
    return res;
}
int main(){
    long long n;
    cin>>n;
    cout<<"the number of digits are "<<countdigit(n);
    return 0;
}