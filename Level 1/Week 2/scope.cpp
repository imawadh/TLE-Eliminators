# include <iostream>
using  namespace std;
int a = 9;
int val()
{
    cout<<a;
    // Here we donot use scope resolution operator ...
    // Scope resolution operator is needed in case of main function

    
    // How to import values from one function to another ?



    return 0;
}

int main()
{
    int a = 90;
    cout<<"Global Scope :: "<<::a<<'\n'<<"Local Scope :: "<<a<<endl;
    val();
    // Local Scope has always more priority than global scope ....

}