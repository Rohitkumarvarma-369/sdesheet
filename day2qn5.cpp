#include<bits/stdc++.h>
using namespace std;

void solvebrute(vector<int> v, int n){

    map<int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i] = 0;
    }
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
            cout<<"Repeating number: "<<it->first<<endl;
        }
        if(it->second<1){
            cout<<"Missing number: "<<it->first<<endl;
        }
    }

}

void solvebetter(vector<int> v, int n){

    int s,s1,p,p1=0;
    s = (n*(n+1))/2;
    s1 = accumulate(v.begin(),v.end(),0);
    p = (n*(n+1)*((2*n)+1))/6;
    for(int i=0;i<n;i++){
        p1 = p1 + pow(v[i],2);
    }
    s = s-s1;
    p = p-p1;
    cout<<"Repeating number: "<<((s+(p/s))/2)-s<<endl;
    cout<<"Missing Number: "<<(s+(p/s))/2<<endl;

}

void solveoptimal(vector<int> v, int n){

    //xor bucket method
    
}

int main(){
    int n;
    cin>>n;
    //declare a vector and insert user input
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //method-1: count sort
    //method-2: math
    //method-3: xor

    solvebrute(v,n);
    solvebetter(v,n);
    solveoptimal(v,n);
}