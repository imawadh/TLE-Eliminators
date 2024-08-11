# include <bits/stdc++.h>
using namespace std;

void printDiamond(int n) {
        for(int i =1; i<=n; i++)
        {
            for(int j = 1; j<n-i+1; j++)
            {
                cout<<" ";
            }
            for(int j = 1; j<=i; j++)
            {
                cout<<"* ";
            }
            cout<<'\n';
        }
        for(int i =1; i<=n; i++)
        {
            for(int j = 1; j<i; j++)
            {
                cout<<" ";
            }
            for(int j = n; j>=i; j--)
            {
                cout<<"* ";
            }
            cout<<'\n';
        }
        
    }
int main(){
    printDiamond(8);
}