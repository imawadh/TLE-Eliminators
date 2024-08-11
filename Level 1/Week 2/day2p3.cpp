# include <bits/stdc++.h>
using namespace std;
int main(){
    long long  test;
    cin>>test;
    long long pre1 = 0;
    long long pre2 = 1;
    long long temp;
    for(int i =0; i<test-1; i++)
    {
        temp = pre1 + pre2;
        pre1= pre2;
        pre2= temp;
    }
    cout<<pre1<<'\n';
}