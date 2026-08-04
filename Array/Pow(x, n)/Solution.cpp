<<<<<<< HEAD
=======
<<<<<<< HEAD
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
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
#include <iostream>
using namespace std;

double myPow(double x, int n) {
<<<<<<< HEAD

    long long power = n;
    double ans = 1.0;

=======
    long long power = n;
    double ans = 1.0;
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }
<<<<<<< HEAD

    while (power > 0) {

        if (power % 2 == 1)
            ans *= x;

        x *= x;
        power /= 2;
    }

    return ans;
}

int main(){

=======
    while (power > 0) {
        if (power % 2 == 1) ans *= x;
        x *= x;
        power /= 2;
    }
    return ans;
}
int main(){
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
    double x;
    int n;
    
    cout<<"Enter a Number : ";
    cin>>x;
    cout<<"Enter the Power : ";
    cin>>n;

    cout<<"The "<<n<<"th power of "<<x<<" is : "<<myPow(x,n)<<endl;
<<<<<<< HEAD
    
    return 0;
}
=======
    return 0;
}
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
