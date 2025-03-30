# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void printSum(vector<vector<int>> &mat1,vector<vector<int>>&mat2,int r, int c,int n,int m){
    if(r>=n) return;

    if(c>=m){
        cout<<'\n';
        printSum(mat1,mat2,r+1,0,n,m);
        return;
    }

    cout<<mat1[r][c] + mat2[r][c]<<' ';
    printSum(mat1,mat2,r,c+1,n,m);

    return;
}
 
void awadh_solution(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat1(n,vector<int>(m));
    vector<vector<int>> mat2(n,vector<int>(m));

    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat2[i][j];
        }
    }
    printSum(mat1,mat2,0,0,n,m);
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }

}