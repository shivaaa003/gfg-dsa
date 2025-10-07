#include<bits/stdc++.h>
using namespace std;
bool ispal(int n){
    int rev=0;
    int temp=n;
    while(temp>0){
        int rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    return (rev==n);
}
int main(){
    cout<<"enter number";
    int n;
    cin>>n;
    if(ispal(n)) cout<<"this number is palindrome";
    else cout<<"this number is not palindrome";
    return 0;
}