# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    cout<<"\n       Single Pointer \n \n";
    int arr[10];
    for(int i =0;i <10; i++)
    {
        arr[i]=i+5;
        cout<<arr[i]<<' ';
    }



    cout<<"\nPrinting arr :: "<<*arr<<'\n'<<"Printing arr [1] :: "<<*(arr + 1)<<'\n';
    for(int i =0; i<10; i++)
    {
        cout<<*(arr+i)<<'\n';
    }
    cout<<"\n             Double Pointer \n \n";
    int y = 10;
    int *yy;
    yy = &y;
    int **yyy;
    yyy = &yy;
    int ***yyyy = &yyy;
    cout<<"y :: Value of y ::  "<<y<< "  \nyy:: Address of y's first bit :: "<<yy<<"\nyyy :: Address of yy first bit ::  "<<yyy<<"\n\n";
    cout<<"y :: Value of y ::  "<<y<< "  \nyy:: Value of y pointed by yy pointer :: "<<*yy<<"\nyyy ::Value of yy pointed by yyy pointer  ::  "<<*yyy<<"\n\n";
    cout<<"y :: Value of y ::  "<<y<< "  \nyy:: Value of y pointed by yy pointer :: "<<*yy<<"\nyyy ::Value of y pointed by yy pointer using double poiter **   ::  "<<**yyy<<"\n\n";
    
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}