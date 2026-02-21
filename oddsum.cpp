#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i=0;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout << "The sum: "<< sum;
    return 0;
}