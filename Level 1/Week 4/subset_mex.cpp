# include <bits/stdc++.h>
using namespace std;
// accepted 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(101,0);
        for(int i =0; i<size;i++)
        {
            int n;
            cin>>n;
            v[n]+=1;
        }
        
        int ct = 0;
        int ans = 0;
        bool flag = true;
        for(int i = 0; i<101; i++)
        {
            if(v[i]==1 && flag)
            {
                flag = false;
                ans+=i;
                ct++;
            }
            else if(v[i]==0)
            {
                ans+=i;
                i--;
                ct++;
            }
            if(ct==2)
            {
                cout<<ans<<'\n';
                break;
            }  
        } 
        }

    }
