# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void helper(vector<vector<int>> &mat){
    for(int i = 1; i<mat.size(); i++){
        for(int j =  1; j<mat[i].size(); j++){
            mat[i][j] = max(mat[i-1][j],mat[i][j-1])+mat[i][j];
        }
    }
}
 
void awadh_solution(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i =0;i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 1; i<n; i++){
        mat[i][0] +=mat[i-1][0];
    }
    for(int i = 1; i<m; i++){
        mat[0][i] += mat[0][i-1];
    }

    helper(mat);
    cout<<mat[n-1][m-1];

}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}