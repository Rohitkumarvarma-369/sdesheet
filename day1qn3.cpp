#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v){
    cout<<endl;
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    vector<int> temp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    int itr = 0;
    for(int i=n-2;i>=0;i--){
        if(temp[i+1]>temp[i]){
            itr = i;
            break;
        }
    }
    int j;
    if(itr<0){
        reverse(temp.begin(),temp.end());
    }
    else{
        for(j=n-1;j>itr;j--){
            if(temp[j]>temp[itr]){
                break;
            }
        }
    }
    swap(temp[j], temp[itr]);
    reverse(temp.begin()+j+1, temp.end());

    printvector(temp);
    

}