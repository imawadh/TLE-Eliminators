# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        int odd =0;
        int even = 0;
        int dif = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(v[i]%2==0) odd++;
            else even++;
            if(i%2==0 && v[i]%2==1 || i%2==1 && v[i]%2==0)
            {
                dif++;
            }
        }
        if(odd==(size+1)/2)
        {
            cout<<dif/2<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }

    }
}