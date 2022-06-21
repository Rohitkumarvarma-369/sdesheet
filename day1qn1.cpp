#include<bits/stdc++.h>
using namespace std;

void solvebrute(vector<vector<int>> v, int n, int m){


}
void solvebetter(vector<vector<int>> v, int n, int m){

}
void solveoptimal(vector<vector<int>> v, int n, int m){

}
int main(){
    int n;
    int m;
    cin>>n>>m;

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

    solvebrute(v,n,m);
    solvebetter(v,n,m);
    solveoptimal(v,n,m);
}