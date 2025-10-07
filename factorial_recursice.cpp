#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial of number found recursively is "<<fact(n);
    return 0;
}

//recursive method theta(n) auxilarry space: theta(n)