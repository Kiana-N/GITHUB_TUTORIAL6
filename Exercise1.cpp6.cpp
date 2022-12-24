#include<iostream>
using namespace std;
int main()
{
    int choice,i,j;
    cout<<"\n Enter your choice between these items: (1,2,3,4,5):";
    cin>>choice;
    switch(choice)
    {
        case 1:
            for(i=1;i<=6;i++) {
                for (j = 1; j <=7-i; j++) {
                    cout << j<<" ";
                }
                cout << endl;
            }
            break;
        case 2:
            for(i=1;i<=5;i++) {
                for (j = 1; j <= 6-i; j++) {
                    cout<< i*1<<" ";
                }
                cout << endl;
            }
            break;
        case 3:
            for(i=1;i<=5;i++) {
                for (j = 5; j >=i; j--)
                for(j=5;j>=i;j--){
                    cout<<j*1;
                }
                cout << endl;
            }
            break;
       case 4:
            for(i=0;i<=4;i++)
            {
                for(j=0;j<=i;j++)
                {
                    cout<<i*j<<" ";
                }
                cout<<endl;
            }
            break;
        case 5:
            for(j=1;i<=13;j++)
            {
                if(j<=7) {
                    for (i = 1; i <= 7 - j; i++) {
                        cout << " ";
                    }
                    for (i = 1; i <= j; i++) { cout << i * j; }
                    cout << endl;
                }
                else
                {
                for(i=1;i<=7;i++){
                    cout<<" ";
                }
                for(i=1;i<=j;i++){
                    cout<<i*j;}
                cout<<endl;
                }
            }
            break;
    }
    return 0;
}  
