#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter ch:";
    cin >> ch;
    if(ch>='a' && ch <='z'){
        cout << "lower case\n";
    }
    else{
        cout << "upper case\n";
    }
    int n=90;
    cout << (n%2==0? "even" : "odd");
    return 0;
}