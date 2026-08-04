<<<<<<< HEAD
=======
<<<<<<< HEAD
#include<iostream>
    using namespace std;

int fib(int n) {

        if (n <= 1)
            return n;

        int prev2 = 0;
        int prev1 = 1;

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
int main(){

    cout<<fib(5);
    return 0;
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
#include<iostream>
    using namespace std;

int fib(int n) {

        if (n <= 1)
            return n;

        int prev2 = 0;
        int prev1 = 1;

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
int main(){

    cout<<fib(5);
    return 0;
<<<<<<< HEAD
}
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
