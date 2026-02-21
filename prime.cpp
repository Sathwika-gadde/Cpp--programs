#include <iostream>
using namespace std;
int main(){
    bool isPrime=true;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
        
    }
    if(isPrime==true){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
    return 0;
}