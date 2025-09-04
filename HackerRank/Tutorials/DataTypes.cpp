#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int num1;
    double num2;
    string str;
    cin>>num1;
    cin>>num2;
    cin.ignore(); // to ignore newline before getline
    getline(cin, str);
    
    // Declare second integer, double, and String variables.
    int sum=i+num1;
    cout<<sum<<endl;
   
    cout << fixed << setprecision(1) << d + num2 << endl;
    cout<<s+str<<endl;
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    return 0;
}
