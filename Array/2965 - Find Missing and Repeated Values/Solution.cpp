<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

vector<int>findMissingAndRepeatedValues(vector<vector<int>> &grid){

    int n = grid.size();
    int N = n * n;

    vector<int> freq(N + 1, 0);

    for(auto &row : grid){
        for(int x : row){
            freq[x]+=1;
        }
    }

    int duplicate = -1, repeated = -1;

    for(int i = 0; i < N; i+=1){
        
        if(freq[i] == 0) repeated = i;
        if(freq[i] == 2) duplicate = i;
    }
    return {duplicate, repeated};
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    for(int i = 0; i < n; i+=1){
        for(int j = 0; j < n; j+=1){
            cin >> grid[i][j];
        }
    }

    vector<int> result = findMissingAndRepeatedValues(grid);

    cout << "Duplicate = " << result[0] << endl;
    cout << "Repeated = " << result[1] << endl;

    return 0
=======
#include<iostream>
#include<vector>
using namespace std;

vector<int>findMissingAndRepeatedValues(vector<vector<int>> &grid){

    int n = grid.size();
    int N = n * n;

    vector<int> freq(N + 1, 0);

    for(auto &row : grid){
        for(int x : row){
            freq[x]+=1;
        }
    }

    int duplicate = -1, repeated = -1;

    for(int i = 0; i < N; i+=1){
        
        if(freq[i] == 0) repeated = i;
        if(freq[i] == 2) duplicate = i;
    }
    return {duplicate, repeated};
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    for(int i = 0; i < n; i+=1){
        for(int j = 0; j < n; j+=1){
            cin >> grid[i][j];
        }
    }

    vector<int> result = findMissingAndRepeatedValues(grid);

    cout << "Duplicate = " << result[0] << endl;
    cout << "Repeated = " << result[1] << endl;

    return 0
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}