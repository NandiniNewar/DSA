// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void print(int i, int n){
    if(i>n){
        return;
    }
    cout<<i;
    print(i+1,n);
}
int sum1(int n,int sum){
    if(n==0){
        return sum;
    }
    return sum1(n-1,sum+n);
}

int main() {
    int n;
    int i=1; 
    int sum=0;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //   sum+=i;
    // }
    // cout<<sum<<endl;
    // print(i,n);
    // cout<<n*(n+1)/2;
    cout<< sum1(n,sum);
    return 0;
}