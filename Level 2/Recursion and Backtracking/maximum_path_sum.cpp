# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> mat(r,vector<int>(c));
    for(int i =0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 1; i<r ;i++){
        mat[i][0]+=mat[i-1][0];
    }
    for(int i = 1; i<c ;i++){
        mat[0][i]+=mat[0][i-1];
    }
    for(int i =1; i<r; i++){
        for(int j = 1; j<c; j++){
            mat[i][j] = max(mat[i-1][j],mat[i][j-1])+mat[i][j];
        }
    }
    cout<<mat[r-1][c-1];
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}