# include <bits/stdc++.h>
using namespace std;
// solved
void print(int num1,int num2)
{
    if(num1<num2)
    {
        while(num1!=num2)
        {
            cout<<++num1<<' ';
        }
    }
    else{
        while(num1!=num2)
        {
            cout<<--num1<<' ';
        }
    }
    // cout<<num2<<' ';
}
int main(){

    int size;
    cin >>size;
    vector <int> v(size);
    for (int i =0; i<size ; i++){
        cin>>v[i];
    }
    cout<<v[0]<<' ';
    for(int i =1; i<size; i++)
    {
        print(v[i-1],v[i]);
    }
}