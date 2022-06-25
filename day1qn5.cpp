#include <bits/stdc++.h>
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
    int left = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(v[mid]==0){
            swap(v[left], v[mid]);
            left++;
            mid++;
            continue;
        }
        if(v[mid]==1){
            ++mid;
            continue;
        }

        if(v[mid]==2){
            swap(v[high],v[mid]);
            --high;
            continue;
        }
        
    }
    //print a vector v with endl
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;

}