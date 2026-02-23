#include <iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout << "Enter n: ";
    cin >> n;
    while(n>0){
        int dig=n%10;
        count+=1;
        n=n/10;
    }
    cout << "The number of digits in "<< n << ": "<< count;
    return 0;
}