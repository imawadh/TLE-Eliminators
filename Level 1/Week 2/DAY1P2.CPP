# include <bits/stdc++.h>
using namespace std;
int main(){
    
        int size;
        cin >>size;
        bool flag = 0;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(!flag)
            {
                if(v[i]==1)
                {
                    flag  =1;
                }
            }
        }
        if(!flag)
        {
        cout<<"EASY";
        }
        else{
            cout<<"HARD";
        }
}