# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    vector <vector<char>> v(test,vector<char>(test)); 
    for(int i = 0;i<test;i++)
    {
        for(int j=0;j<test;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i = 0;i<test;i++)
    {
        for(int j=0;j<test;j++)
        {
            if(i==0 || j==0 || i==test-1 || j==test-1)
            {
                if(i==0)
                {
                    if(j==0)
                    {
                        cout<<v[1][0];
                    }
                    else{
                        cout<<v[0][j-1];
                    }
                }
                else if(i==test-1)
                {
                    if(j==test-1)
                    {
                        cout<<v[i-1][j];
                    }
                    else{
                        cout<<v[i][j+1];
                    }
                }
                else if(j==0)
                {
                    cout<<v[i+1][j];
                }
                else 
                {
                    cout<<v[i-1][j];
                }
            }
            else{
                cout<<v[i][j];
            }
        }
        cout<<'\n';
    }
}