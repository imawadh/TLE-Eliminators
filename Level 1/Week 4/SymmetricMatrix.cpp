# include <bits/stdc++.h>
using namespace std;
// wrong answer
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        bool flag1=false,flag2=false;
        if(m%2==0)
        {
            flag1 = true;
        }
        if(n==1)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(b==c)
            {
                flag2 =true;
            }
        }
        else{
            for(int i =0; i<n; i++)
            {
                int a,b,c,d;
                cin>>a>>b>>c>>d;
                if(a==d && b==c)
                {
                    flag2=true;
                }
            }
        }
        
        if(flag1 && flag2)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}