# include <bits/stdc++.h>
using namespace std;
void solution(){
    int num; 
    cin>>num;
    while(num--){
        set <int> num_set;
        int size;
        cin>>size;
        for(int i =0; i<size; i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                num_set.insert(x);
            }
        }
        int ans = 0;
        while(!num_set.empty())
        {
            int val = *num_set.rbegin();
            if((val/2)%2==0)
            {
                num_set.insert(val/2);
            }
            num_set.erase(val);
            ans++;
        }
        cout<<ans<<'\n';
    }
};
int main(){
    solution();
    
}