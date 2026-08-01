<<<<<<< HEAD
#include<iostream>
    using namespace std;

int climbingStairs(int n){

    if(n <= 2) return n;

    int prev1 = 2, prev2 = 1;

    for(int i = 3; i <= n; i+=1){
        int curr = prev1 + prev2;

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}
int main(){
    int n; 
    cin>>n;
    cout<<climbingStairs(n);
    return 0;
=======
#include<iostream>
    using namespace std;

int climbingStairs(int n){

    if(n <= 2) return n;

    int prev1 = 2, prev2 = 1;

    for(int i = 3; i <= n; i+=1){
        int curr = prev1 + prev2;

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}
int main(){
    int n; 
    cin>>n;
    cout<<climbingStairs(n);
    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}