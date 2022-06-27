#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    //method-1: sort and pickup 
    //method-2: frequency array or map ds
    //method-3: slow pointer-fast pointer approach (optimal)

    int slow = v[0];
    int fast = v[0];

    do{
        slow = v[slow];
        fast = v[v[fast]];

    }while(slow!=fast);

    slow = v[0];
    while(slow!=fast){
        slow = v[slow];
        fast = v[fast];
    }
    cout<<slow<<endl;
}