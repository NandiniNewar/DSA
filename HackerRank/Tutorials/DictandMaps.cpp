#include <bits/stdc++.h>

using namespace std;
void findPhoneNo(string str, unordered_map<string,long long> &phoneBook){
    if(phoneBook.find(str) != phoneBook.end()) {
        cout<<str<<"="<<phoneBook[str]<<endl;
    } else{
        cout<<"Not found"<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;  
    cin>>n;
    unordered_map<string,long long> phoneBook;
    string str;
    long long phoneNo;
    for(int i=0;i<n;i++){
        cin>>str>>phoneNo;
        phoneBook[str] = phoneNo;   
    }
    string name;
    while(cin>>name){
        findPhoneNo(name,phoneBook);
    }
    return 0;
}
