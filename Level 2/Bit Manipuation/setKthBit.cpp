# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    cout<<"Enter the number to flip the bit :: ";
    int num;
    cin>>num;
    cout<<"Enter the Kth Bit position :: ";
    int k;
    cin>>k;
    int setValue = num|(1<<k-1);// 
    cout<<"The Original Number is :: "<<num<<"\nThe Bit Transformed Number is :: "<< setValue<<'\n';
 
}
 
int main(){
 
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}