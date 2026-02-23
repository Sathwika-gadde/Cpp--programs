#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n=12345;
    while(n>0){
        int dig=n%10;
        sum+=dig;
        n=n/10;
    }
    cout << sum;
}