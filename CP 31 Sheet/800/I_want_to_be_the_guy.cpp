# include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    vector <int> v(b);
    set <int> myset;
    for(int i =0;i<b; i++)
    {
        int a;
        cin>>a;
        myset.insert(a);
    }
    cin>>c;
    for(int i =0; i<c; i++)
    {
       int a;
        cin>>a;
        myset.insert(a);
    }
    
    if(myset.size()!=a)
    {
        cout<<"Oh, my keyboard!";
    }
    else{
        cout<<"I become the guy.";
    }
    return 0;    
}