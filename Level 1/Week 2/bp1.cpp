# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        string s;
        for(int i =1; i<=12; i++)
        {
            if(i==a || i==b)
            {
                s += 'r';
            }
            else if(i==c || i==d)
            {
                s+='b';
            }
        }
        if(s=="rrbb" || s=="bbrr" || s=="brrb" || s=="rbbr")
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}