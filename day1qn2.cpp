#include<bits/stdc++.h>
using namespace std;
void printvector(vector<vector<int>> v){
    cout<<endl;
    for(auto i: v){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    vector<int> temp;
    temp.push_back(1);
    v.push_back(temp);
    temp.clear();
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            if(j==0){
                temp.push_back(1);
            }
            else if(j==i-1){
                temp.push_back(v[i-2][j-1]);
            }
            else{
                temp.push_back(v[i-2][j-1]+v[i-2][j]);
            }
        }
        v.push_back(temp);
        temp.clear();
    }
    printvector(v);
}