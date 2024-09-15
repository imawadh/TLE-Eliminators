# include <iostream>
using namespace std;
int main(){
    cout<<"Enter Height :: ";
    int a ; cin>>a;
    for(int i =1; i<=a; i++)
    {
        for(int j =1;j <=a-i+1; j++)
        {
            if(i==1 || j==1 || a-j-i==-1)   
            cout<<"* ";
            else cout<<"  ";
            
        }
        cout<<'\n';
    }
}