# include <bits/stdc++.h>
using namespace std;
// not solved
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> v1(n);
    vector <int> v2(m);
    for(int i =0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
    }
    bool flag=false;
    for(int i =0; i<m; i++)
    {
        flag = false;
        for(int j =0; j<n; j++)
        {
            if(v2[i]==v1[j])
            {
                v1[j]=-1;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"No";
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes";
    }

}