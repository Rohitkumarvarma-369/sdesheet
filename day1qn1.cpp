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

void solvebrute(vector<vector<int>> v, int n, int m){
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(v[i][j]==0){
                int ind = i-1;
                while(ind>=0){
                    if(v[ind][j]!=0){
                        v[ind][j]=-1;
                    }
                    --ind;
                }

                ind = i+1;
                while(ind<n){
                    if(v[ind][j]!=0){
                        v[ind][j] = -1;
                    }
                    ++ind;
                }
                ind = j-1;
                while(ind>=0){
                    if(v[i][ind]!=0){
                        v[i][ind] = -1;
                    }
                    --ind;
                }
                ind = j+1;
                while(v[i][ind]<m){
                    if(v[i][ind]!=0){
                        v[i][ind] = -1;
                    }
                    ++ind;
                }
                
            }
        }
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]<=0){
                v[i][j] = 0;
            }
        }
    }
    printvector(v);
}
void solvebetter(vector<vector<int>> v, int n, int m){

    vector<int> rowtemp(n, 0);
    vector<int> coltemp(m, 0);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                rowtemp[i] = 1;
                coltemp[j] = 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rowtemp[i]==1 || coltemp[j]==1){
                v[i][j] = 0;
            }
        }
    }
    printvector(v);


}
void solveoptimal(vector<vector<int>> v, int n, int m){

    int col = 1;
    for(int i=0;i<n;i++){
        if(v[i][0]==0){
            col = 0;
        }

        for(int j=1;j<m;j++){
            if(v[i][j]==0){
                v[i][0] = 0;
                v[0][j] = 0;
            }
        }
    }

    for(int i=n-1;i>=0;--i){
        for(int j=m-1;j>=1;--j){
            if(v[i][0]==0 || v[0][j]==0){
                v[i][j]=0;
            }
        }
        if(col==0){
            v[i][0] = 0;
        }
    }

    printvector(v);

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