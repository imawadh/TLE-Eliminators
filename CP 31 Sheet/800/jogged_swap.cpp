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
        int min = v[0];
        for (int i =0; i<size ; i++){
            if(v[i]<min)
            {
                min = v[i];
            }
        }
        if(v[0]==min)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}