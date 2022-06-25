#include <bits/stdc++.h>
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
    int currmin = INT_MAX;
    int currmaxdiff = 0;
    for(int i=1;i<n;i++){
        currmin = min(currmin, v[i-1]);
        currmaxdiff = max(v[i]-currmin, currmaxdiff);
    }
    cout<<currmaxdiff;
}