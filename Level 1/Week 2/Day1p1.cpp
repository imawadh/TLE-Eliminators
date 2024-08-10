# include <bits/stdc++.h>
using namespace std;
int main(){
    
        int size;
        cin >>size;
        int o = 0;
        int e = 0;
        int p =0;
        int n =0;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(v[i]%2==0) e++;
            
            else{ o++;}
            
            if(v[i]>0)  p++;
            
            if(v[i]<0) n++;
        }
        cout<<"Even: "<<e<<'\n'<<"Odd: "<<o<<'\n'<<"Positive: "<<p<<'\n'<<"Negative: "<<n<<'\n';
}