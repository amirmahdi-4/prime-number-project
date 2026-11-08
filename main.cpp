#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   system("color b");
    int number;
    cout<<"enter your number: ";
    cin>>number;
     if(number<2)
        cout<<"Not Prime";
     else
    {   int i=2;
        while(i<number && number%i!=0)
        {
            i++;
        }
        if(i==number)
            cout<<"Prime Number";
        else
            cout<<"Not Prime";
    }
    return 0;
}
