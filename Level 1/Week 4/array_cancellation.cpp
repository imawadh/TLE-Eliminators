# include <bits/stdc++.h>
using namespace std;
// accepted
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <long long> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        
        if(size==1)
        {
            cout<<0<<'\n';
            continue;
        }
        int n =1;
        int p =0;
        while(n<size && p<size)
        {
            if(v[p]<=0)
            {
                p++;
            }
            else if(v[n]>=0)
            {
                n++;
            }
            else{
                
                if(abs(v[n])>v[p])
                {
                    v[n]+=v[p];
                    v[p]=0;
                    p++;  
                }
                else{
                    v[p]+=v[n];
                    v[n]=0;
                    n++;   
                }
            }
            if(n<p)
            {
                n=p+1;
            }
        }
        long long ans=0;
        for(int i =size-1; i>=0; i--)
        {
            ans+=abs(v[i]);
        }
        cout<<ans/2<<'\n';
    }
}
