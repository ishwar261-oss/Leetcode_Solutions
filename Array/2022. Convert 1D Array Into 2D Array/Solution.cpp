#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> construcr2DArray(vector<int> &orignal, int m, int n){
    vector<vector<int>> result;

    if(orignal.size() != m * n) return {};

    for(int i = 0; i < m; i++){
        vector<int>row;
        for(int j = 0; j < n; j++)
            row.push_back(orignal[i * n + j]);

        result.push_back(row);
    }
    return result;
}
int main(){
    int m,n;
    cin>>m>>n;

    vector<int> orignal(m * n);

    for(int i = 0; i < m * n; i++){
        cin>>orignal[i];
    }

    vector<vector<int>> result = construcr2DArray(orignal,m,n);

    if(result.empty()){
        cout<<"Arrat is Empty";
        return 0;
    }

    for( int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout<<result[i][j]<<' ';
        cout<<endl;
    }

    return 0;
}