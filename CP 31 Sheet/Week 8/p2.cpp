# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
       if(size%2==0)
       {
        cout<<(size/2)<<' '<<size<<'\n';
       }
       else{
        cout<<size/2<<' '<<size-1<<'\n';
       }
    }
}