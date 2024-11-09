# include <iostream>
# include <ctime>

using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
        int totalSecond = time(0);
        int currentSecond = totalSecond%60;
        int totalMinutes = totalSecond/60;
        int currentMinute = totalMinutes%60;
        int totalHour = totalMinutes/60;
        int currentHour = totalHour%24;

        cout<<"\n\nCurrent time in GMT is :: "<<currentHour<<" : "<<currentMinute<<" : "<<currentSecond<<"\n\n\n";
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}