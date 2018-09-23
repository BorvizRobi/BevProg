#include "std_lib_facilities.h"
int main()
{
double szam1;
double szam2;
char a;
while(cin>>szam1&&cin>>szam2)
{
if(szam1<szam2)
{
cout<<"The smaller value is: "<<szam1<<"\n"<<"The larger value is: "<<szam2<<"\n"; 
if((szam2-szam1)<=0.0000001)
cout<<"The numbers are almost equal.\n";
}
if(szam1>szam2)
{
cout<<"The smaller value is: "<<szam2<<"\n"<<"The larger value is: "<<szam1<<"\n";
if((szam1-szam2)<=0.0000001)
cout<<"The numbers are almost equal.\n";
}
if(szam1==szam2)
cout<<"The numbers are equal: "<<szam1<<"="<<szam2<<"\n";


}
}
