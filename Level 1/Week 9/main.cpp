# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        string s;
        cin>>s;
        deque <int> d;
        if(d.empty())
        {
            d.push_front(s[size-1]);
            size-=2;
        }
        bool flag = true;
        while(size!=-1)
        {
            if(flag ==true)
            {
                if(d.back()=='0' && s[size]=='1')
                {
                    d.pop_back();
                    d.push_back(1);
                }
                else if(d.back()=='1' && s[size]=='1')
                {
                    d.push_back(1);
                    size--;
                    continue;
                }
                flag = false;   
            }
            else
            {
                if(d.back()=='1' && s[size]=='0')
                {
                    d.pop_back();
                    d.push_back(0);
                }
                else if(d.back()=='0' && s[size]=='0')
                {
                    d.push_back(0);
                    size--;
                    continue;
                }
                flag = true;
            }
            size--;
        }
        cout<<d.front()<<'\n';
    }
}