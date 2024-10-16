# include <bits/stdc++.h>
using namespace std;
//solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        int odd =0;
        int even = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool flag = true;
        long long alice =0,bob=0;
        for (int i =size-1; i>=0 ;i--){
            if(flag)
            {
                if(v[i]%2==0)
                alice+=v[i];
                flag = false;
            }
            else{
                if(v[i]%2==1)
                bob+=v[i];
                flag = true;
            }
            
        }
        if(alice>bob)
        {
            cout<<"Alice\n";
        }
        else if(alice==bob)
        {
            cout<<"Tie\n";
        }
        else{
            cout<<"Bob\n";
        }

    }
}