#include <bits/stdc++.h>
using namespace std;
void oddeven(string str){
    int len=str.size();
    for(int i=0; i<len;i++){
        if(i%2==0){
            cout<<str[i];
        }
    }
    cout<<" ";
    for(int i=0; i<len;i++){
        if(i%2!=0){
            cout<<str[i];
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    // vector<string> inputStr;
    string str;
    for (int i=0;i<n;i++){
        cin>>str;
        // inputStr.push_back(str);
        oddeven(str);
        cout<<endl;
    }
    
    return 0;
}
