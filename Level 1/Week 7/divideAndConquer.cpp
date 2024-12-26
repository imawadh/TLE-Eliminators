# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
vector <int> v(100);
 
int awadh_solution(){

    int size;
    cin>>size; 

    int min_even = INT_MAX; 
    int min_odd = INT_MAX;
    int oddCount = 0;

    int sum  = 0;
    for(int i = 0; i<size; i++)
    {
        cin>>v[i];
        sum+=v[i];
        if((v[i]&1)==1 && v[i]<min_odd){
            min_odd = v[i];
            oddCount++;
        }
        if((v[i]&1)==0 && v[i]<min_even)
        {
            min_even = v[i];
        }
        
    }
    
    if((sum&1)==0) return 0; 

    int ctEven  = 0;
    int ctOdd  = 0;
    
    if(min_even!=INT_MAX)
    {
        while(min_even!=0 && (min_even&1)==0)
        {
            ctEven++;
            min_even/=2;
        }
        if(min_odd==INT_MAX)
        {
            return ctEven;
        }
    }
    
    if(min_odd!=INT_MAX)
    {
        while(min_odd!=0 && (min_odd&1)==1)
        {
            ctOdd++;
            min_odd/=2;
        }
        if(min_even==INT_MAX)
        {
            return ctOdd;
        }
    }
    return min(ctOdd,ctEven);

    return -1; 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       cout<<awadh_solution()<<'\n';
    }
}