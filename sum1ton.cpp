#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i=1; i<=n;i++){
        
        sum+=i;
        if (i==5){
            break;
        }
        
    }
    cout << "The sum of num 1 to " << n << " is: " << sum << endl;
    return 0;
}