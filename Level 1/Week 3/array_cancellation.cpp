# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        int i = 0;
        int j = 1;
        while(j!=size)
        {
            if(v[j]<=0){
                j++;
            }
            if(v[i]>=0)
            {
                i++;
            }
            if(v[i]<0 && v[j]>0){
                
            }

        }
        int ans = 0;
        for(int i =0; i<size; i++)
        {
            cout<<v[i]<<' ';
            ans +=abs(v[i]);
        }
        cout<<endl;
        cout<<ans/2<<'\n';
    }
}