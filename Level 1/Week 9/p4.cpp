# include <bits/stdc++.h>
using namespace std;
// accepted
int main(){
    
        int size;
        cin >>size;
        vector <int> v(2*size);
        for (int i =0; i<2*size ; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==v[size*2-1]){
            cout<<-1<<'\n';
            return 0;
        }
        for (int i =0; i<2*size ; i++){
            cout<<v[i]<<' ';
        }

}