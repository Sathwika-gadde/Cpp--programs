#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    int sum=0;
    int orig=n;
    while(n>0){
        int dig=n%10;
        sum+=(dig*dig*dig);
        n=n/10;
    }
    if(sum==orig){
        cout << "Armstrong number";
    }
    else{
        cout << "Not an Armstrong number";
    }
    return 0;
}