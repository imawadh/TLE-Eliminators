# include <bits/stdc++.h>
using namespace std;
bool decreasing(vector <int> v)
{
    return true;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        bool flag = true;
        for(int i =1; i<size; i++)
        {
            if(v[i]>=v[i-1])
            {
                flag = false;
                cout<<"YES\n";
                break;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }

    }
}