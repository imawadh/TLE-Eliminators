#include <bits/stdc++.h>
using namespace std;
// solved
int main()
{
    int test;  
    cin >> test;
    while (test--)
    {
        int num;
        cin>>num;
        string str;
        cin >> str;
        int ans = 0;
        int ct = 0;
        bool flag = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.')
            {
                ct++;
                 if(ct>=3)
                {
                    cout<<2<<'\n';
                    flag = 1;
                    break;
                }
            }
           
            else
            {
                if (ct == 2)
                {
                    ans += 2;
                }
                else if (ct == 1)
                {
                    ans += 1;
                }
                ct = 0;
            }
        }
        if(!flag){
        
        if (ct >= 2)
        {
            ans += 2;
        }
        else if (ct == 1)
        {
            ans += 1;
        }
        cout << ans << '\n';
        }
    }
}
