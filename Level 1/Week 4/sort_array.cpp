# include <bits/stdc++.h>
using namespace std;
int main(){
    
    int size;
    cin >>size;
    int v[size];
    for (int i =0; i<size ; i++){
        cin>>v[i];
    }
    sort(v,v+4);
    for (int i =0; i<size ; i++){
       cout<<v[i]<<' ';
    }

}