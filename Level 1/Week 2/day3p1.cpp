# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    vector <int> v(test);
    vector <int> v1(test);
    for(int i =0; i<test; i++)
    {
        cin>>v[i];
    }
    for(int i =0; i<test; i++)
    {
        cin>>v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(),v1.end());
    for(int i =0; i<test; i++)
    {
        if(v[i]!=v1[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}