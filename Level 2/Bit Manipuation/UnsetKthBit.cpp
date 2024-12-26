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

    // int unsettledValue = num & (0<<k-1); Isse ye dikkat hoga ki baki bit bhi 0 ho jayega jo ki mujhe nhi chahiye

    // To avoid such situation lets check at first whether the kth bit is already unset or not if unset then no need to do 
    
    bool check = num & (1<<k-1);
    int unsettledValue = num;
    if(check){
        unsettledValue = num ^ (1<<k-1);
    }
    


    cout<<"The Original Value is :: "<<num<<"\nThe value after Unsettling :: "<<unsettledValue<<'\n';
 
 
}
 
int main(){
 
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}