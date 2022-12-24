#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
cout<<left<<setw( 4 )<< "Iron pill   "<<"\t"<<setw( 8 )<<"8:00/12:00/18:00"<<endl;
cout<<left<<setw( 4 )<< "Antibiotic  "<<"\t"<<setw( 8 )<<"4:00/8:00/12:00/16:00/20:00/24:00"<<endl;
cout<<left<<setw( 4 )<< "Aspirin     "<<"\t"<<setw( 8 )<<"8:00/21:00"<<endl;
cout<<left<<setw( 4 )<< "Decongestant"<<"\t"<<setw( 8 )<<"11:00/20:00"<<endl;
return 0;
}
