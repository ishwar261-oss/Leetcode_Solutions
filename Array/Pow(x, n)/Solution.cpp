#include <iostream>
using namespace std;

double myPow(double x, int n) {

    long long power = n;
    double ans = 1.0;

    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    while (power > 0) {

        if (power % 2 == 1)
            ans *= x;

        x *= x;
        power /= 2;
    }

    return ans;
}

int main(){

    double x;
    int n;
    
    cout<<"Enter a Number : ";
    cin>>x;
    cout<<"Enter the Power : ";
    cin>>n;

    cout<<"The "<<n<<"th power of "<<x<<" is : "<<myPow(x,n)<<endl;
    
    return 0;
}
