#include <iostream>
using namespace std;
int main(){
    int a=3, b=5;
    cout << "The sume of a and b is:" << a+b << endl;
    cout << "The difference:"<<a-b<<endl;
    cout << "product"<<a*b<<endl;
    cout << "modulo"<<a%b<<endl;
    cout << "div"<<a/b<<endl;
    cout << "a==b "<< (a==b)<<endl;
    cout << "a!=b "<< (a!=b)<<endl;
    cout << "a>b "<< (a>b)<<endl;
    cout << "a<b "<< (a<b)<<endl;

    cout << "logical operators" << endl;
    cout << "7>4 && 5>3 " << ((7>4) && (5>3)) << endl;
    cout << "7>4 || 5<3 " << ((7>4) || (5<3)) << endl;
    return 0;

}