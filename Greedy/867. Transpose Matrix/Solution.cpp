#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>transpose(vector<vector<int>>&matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>>ans(cols, vector<int>(rows));
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            ans[i][j] = matrix[j][i];
        }
    }
    return ans;
   
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6}};
    auto ans = transpose(matrix);
    for(auto it : ans){
        for(auto it2 : it){
            cout << it2 << " ";
        }
        cout << endl;
    }
    return 0;
}