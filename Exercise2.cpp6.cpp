#include<iostream>
using namespace std;
int main()
{
    float i,n;
    float rise,sum=0,t;
    for(i=1;i<=12;i++) {
        cout << "\n Enter the salaries of 12 members" << i<<" : ";
        cin >> n;
        rise=(n*2.5)/100;
        t=n+rise;
        cout<<"\n The amount of salary before increase:"<<n;
        cout<<"\n The amount increase:"<<rise;
        cout<<"\n The amount of salary after increase:"<<t;
        sum+=rise;
        cout<<"\n The sum of salary increases::"<<sum;
        cout<<"\n ----------------------";

    }

    return 0;
}
