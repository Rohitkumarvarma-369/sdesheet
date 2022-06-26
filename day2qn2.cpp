#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    //create a matrix with user input
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

    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(ans.empty() || ans.back()[1]<v[i][0]){
                ans.push_back(v[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], v[i][1]);
            }
        }
    }
    //print a matrix
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}