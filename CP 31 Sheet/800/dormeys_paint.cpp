# include <bits/stdc++.h>
using namespace std;
// Not solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin>>size;
        vector <int> v(size);
        set <int> s;
        for (int i =0; i<size ; i++){

            cin>>v[i];
            s.insert(v[i]);
        }
        if(s.size()<=2)
        {
            if(s.size()==1)
            {
                cout<<"Yes\n";
            }
            else{
                pair <int,int> p;
                p.first=0;
                p.second=0;
                for (int i =0; i<size ; i++){
                    if(v[i]==v[0])
                    {
                        p.first++;
                    }
                    else{
                        p.second++;
                    }
                }
                if(abs(p.first-p.second)<=1)
                {
                    cout<<"Yes\n";
                }
                else{
                    cout<<"No\n";
                }

            }
        }
        else{
            cout<<"No\n";
        }
        
        
        
    }
}