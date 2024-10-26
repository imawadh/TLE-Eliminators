# include <bits/stdc++.h>
using namespace std;
void solve(int a,int b, int c)
{

}
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        a%=2;
        b%=2;
        c%=2;
        
        if(b==c)
        {
            cout<<1<<' ';
        }
        else{
            cout<<0<<' ';
        }
        if(a==c)
        {
            cout<<1<<' ';
        }
        else{
            cout<<0<<' ';
        }
        if(b==a)
        {
            cout<<1<<'\n';
        }
        else{
            cout<<0<<'\n';
        }
    }
}