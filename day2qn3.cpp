#include<bits/stdc++.h>
using namespace std;

void printvectors(vector<int> v1, vector<int> v2, int n, int m){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<v2[i]<<" ";
    }

    cout<<endl;

}

void solvebrute(vector<int> v1, vector<int> v2, int n, int m){
    vector<int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(v1[i]);
    }
    for(int i=0;i<m;i++){
        ans.push_back(v2[i]);
    }

    sort(ans.begin(), ans.end());

    for(int i=0;i<n;i++){
        v1[i] = ans[i];
    }
    for(int i=0;i<m;i++){
        v2[i] = ans[n+i];
    }

    printvectors(v1,v2,n,m);


}

void solvebetter(vector<int> v1, vector<int> v2, int n, int m){

    for(int i=n-1;i>=0;i--){
        if(v1[i]>v2[0]){
            swap(v2[0], v1[i]);
            sort(v2.begin(), v2.end());
        }
    }
    sort(v1.begin(), v1.end());

    printvectors(v1, v2, n ,m);

}

void solveoptimal(vector<int> v1, vector<int> v2, int n, int m){

    //gap method

    

}

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }

    solvebrute(v1,v2,n,m);
    solvebetter(v1,v2,n,m);
    solveoptimal(v1,v2,n,m);
}