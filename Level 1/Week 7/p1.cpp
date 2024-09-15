# include <bits/stdc++.h>
using namespace std;
// solved
bool check_lucky(int x){
    int ct1 = 0;
    int ct2 = 0;
    string str = to_string(x);
    for(int i = 0; i<str.size();i++)
    {
        if(str[i]=='4')
        {
            ct1++;
        }
        if(str[i]=='7')
        {
            ct2++;
        }
    }
    if(ct1+ct2==str.size())
    {
        return true;
    }
    return false;
}
int main(){
    int test;
    cin>>test;
   
    if(test%4 == 0 || test%7==0)
    {
        cout<<"YES\n";
    }
    else{
        int i = 44;
        bool flag = false;
        while(i<=test)
        {
            if(check_lucky(i)){
                if(test%i==0)
                {
                    cout<<"YES\n";
                    flag = true;
                    break;
                }
            }
            i++;
        }
        if(!flag)
        {
            cout<<"NO\n";
        }

    }
}