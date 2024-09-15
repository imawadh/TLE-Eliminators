# include <iostream>
using namespace std;
int main(){
    cout<<"Enter Height :: ";
    int a ; cin>>a;
    for(int i =1; i<=a; i++)
    {
        for(int j =1; j<a-i+1; j++)
        {
            cout<<" ";
        }
        for(int j =1;j <=i; j++)
        {
           cout<<"* ";
            
        }
        cout<<'\n';
    }
}