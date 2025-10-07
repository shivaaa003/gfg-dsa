#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res=res*i;
    }
    return res;
}
int main(){
    cout<<"enter number";
    int n;
    cin>>n;
    cout<<"factorial of "<< n<<" is "<< fact(n);
    return 0;
}

//iterative method theta(n)