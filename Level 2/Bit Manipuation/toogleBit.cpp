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
    int toogledValue = num;
    for(int i =0; i<31; i++){
        toogledValue = toogledValue ^ (1<<i);

    };
    
    cout<<"The Original Number is :: "<<num<<"\nThe Bit Transformed Number is :: "<< toogledValue<<'\n';

 
}
 
int main(){
 
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}