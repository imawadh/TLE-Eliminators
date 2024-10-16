# include <bits/stdc++.h>
# include <set>
using namespace std;
int main(){
    int test;
    cin>>test;
    vector <string> v(test);
    set <string> name_set;
    for(int i =0; i<test; i++)
    {
       cin>>v[i];
    }
    
    for (auto it = test-1; it>=0; it--)
    {
            if(name_set.find(v[it])==name_set.end())
            {
                cout<<v[it]<<'\n';
                name_set.insert(v[it]);
            }
    }
    
}