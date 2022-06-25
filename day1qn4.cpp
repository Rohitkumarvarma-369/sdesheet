#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //insert a vector with user input
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int totmax = INT_MIN;
    int currmax = 0;

    for(int i=0;i<v.size();i++){
        currmax = currmax+v[i];
        totmax = max(totmax, currmax);
        if(currmax<0){
            currmax = 0;
        }
    }
    cout<<totmax<<endl;
}