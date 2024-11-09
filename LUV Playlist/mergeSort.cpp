# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void merge(int left, int mid, vector <int> v)
{
    cout<<"x"<<'\n';
    int left_size = mid-left;
    vector <int> left_array(left_size);
    vector <int> right_array;

    for(int i =0; i<left_size;i++)
    {
        left_array[i]=v[i+left];
    }
    for(int i =mid; i<v.size();i++)
    {
        right_array[i-mid]=v[i];
    }
    cout<<"Left Aarray :: ";
    for(int i =0; i<left_size;i++)
    {
        cout<<left_array[i]<<' ';
    }
    cout<<"Right Aarray :: ";
    for(int i =0; i<right_array.size();i++)
    {
        cout<<right_array[i]<<' ';
    }

}
 
void awadh_solution(){
    vector <int> v = {-1,4,2,-100,100};
    
    for(int i=0; i<5; i++)
    {
        cout<<v[i];
    }
    int mid = 3;
    int left = 0;
    cout<<"x"<<'\n';
    merge(left,mid,v);

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}