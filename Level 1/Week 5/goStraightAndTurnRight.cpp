# include <bits/stdc++.h>
using namespace std;
//accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
string s;

void awadh_solution(){
    string direction = "RBLT";
    int n;
    cin>>n;
    cin>>s;
    int ct = 0;
    int leftRight = 0;
    int topBottom =0;
    char currentDirection = 'R';
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]!='S')
        {
            ct++;
            currentDirection = direction[ct%4];
        }
        else if(currentDirection=='R')
        {
            leftRight++;
        }
        else if(currentDirection=='L')
        {
            leftRight--;
        }
        else if(currentDirection=='T')
        {
            topBottom++;
        }
        else{
            topBottom--;
        }
    }
    cout<<leftRight<<" "<<topBottom<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}