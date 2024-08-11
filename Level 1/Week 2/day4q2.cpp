# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int cg;
    cin>>cg;
    string str;
    cin>>str;
    for(int i=1; i<=cg; i++)
    {
        for(int j=test-1; j>0; j--)
        {
            if(str[j]=='G' && str[j-1]=='B')
            {
                swap(str[j-1],str[j]);
                j--;
            }
        }
    }
    cout<<str;
}