#include <iostream>
using namespace std;
int main(){
    int fact=1;
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    cout << "The factorial of "<< n << "is: " << fact;
    return 0;
}