#include<iostream>
#include<vector>
    using namespace std;    
int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int prev2 = cost[0];
        int prev1 = cost[1];        
        for(int i = 2; i < n; i+=1){
            int curr = cost[i] + min(prev1, prev2);

            prev2 = prev1;
            prev1 = curr;
        }

        return min(prev1, prev2);
    }

int main(){
    vector<int> cost = {10,15,20};
    int ans = minCostClimbingStairs(cost);
    cout<<ans<<endl;

    return 0;
#include<iostream>
#include<vector>
    using namespace std;    
int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int prev2 = cost[0];
        int prev1 = cost[1];        
        for(int i = 2; i < n; i+=1){
            int curr = cost[i] + min(prev1, prev2);

            prev2 = prev1;
            prev1 = curr;
        }

        return min(prev1, prev2);
    }

int main(){
    vector<int> cost = {10,15,20};
    int ans = minCostClimbingStairs(cost);
    cout<<ans<<endl;

    return 0;
}
}
