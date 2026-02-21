#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i=1; i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout << "The sum of number from 1 to "<< n << "which are divisible by 3 is:"<<sum;
    return 0;
}