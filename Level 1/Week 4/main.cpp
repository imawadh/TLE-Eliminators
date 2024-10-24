# include <bits/stdc++.h>
using namespace std;
int evenlyDivides(int N){
        //code here
        int ans = 0;
        int num = N;
        while(num>0)
        {
            int val = num%10;
            if(N%val==0)
            {
                ans++;
            }
            num/=10;
        }
        return ans;
    }
int main(){
    evenlyDivides(8);
}