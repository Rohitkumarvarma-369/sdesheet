#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    //create a matrix vector and take user input
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    //transpose a matrix inplace
    for(int i = 0; i<v.size();i++){
        for(int j=i;j<v[0].size();j++){
            swap(v[i][j], v[j][i]);
        }
    }
    //reverse each row of a matrix
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(), v[i].end());
    }
    //print a matrix
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}