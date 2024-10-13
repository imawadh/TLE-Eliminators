# include <bits/stdc++.h>
using namespace std;
// tle
int main(){
    int test;
    cin>>test;
    vector <string> name(test);
    for(int i =0; i<test; i++)
    {
        cin>>name[i];
    }
    // cout<<"--- \n";
    for(int i =test-1; i>=0; i--)
    {
        bool flag = false;
        for(int j = i+1; j<test; j++)
        {
            if(name[i]==name[j])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout<<name[i]<<'\n';
        }
    }
}