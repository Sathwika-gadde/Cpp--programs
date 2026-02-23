#include <iostream>
using namespace std;
int main(){
    int n=1213121;
    int orig=n;
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
    }
    if(orig==rev){
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";
    }
}