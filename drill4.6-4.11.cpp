#include "std_lib_facilities.h"
int main()
{
double szam;        // Változók és vector létrehozása
double largest=0;
double smallest=1000;
double elozo;               
double sum=0;
string unit;
vector<double>szamok;

while(cin>>szam>>unit)  //addig fut a ciklus ameddig nem hibás értéket adok meg, mivel '|' hibás érték ezért megszakítja a ciklust
{ 

if(unit=="cm")      // ha a mértékegységek megfelelőek átváltja öket méterbe és beküldi a vektorba.
{
szam=szam/100;
szamok.push_back(szam);}
if (unit=="m")
{szam=szam;
szamok.push_back(szam);}
if (unit=="ft")
{szam=szam/3.28;
szamok.push_back(szam);}
if (unit=="in")
{szam=szam/39.37;
szamok.push_back(szam);}

if (unit!="cm"&&unit!="m"&&unit!="ft"&&unit!="in")  //ha a mértékegységek nem jók nem jegyzi meg őket a program
{
cout<<"value deleted:illegal unit\n";}


if (szam>largest) // kiírja az éppen aktuális bevitt érték alá hogy az eddigi legnagyobb vagy legkisebb.
{largest=szam;
cout<<"largest so far.\n";}
if (szam<smallest)
{smallest=szam;
cout<<"smallest so far.\n";}
}
cout<<"smallest value(in meter): "<<smallest<<"\n";//kiiratom az adatokat amit még kér a feladat.
cout<<"largest value(in meter): "<<largest<<"\n";
sort(szamok.begin(),szamok.end());
cout<<"number of values: "<<szamok.size()<<"\n";
for(int i=0;i<szamok.size();++i){sum+=szamok[i];}
cout<<"sum of values(in meter): "<<sum<<"\n";
for(int i=0;i<szamok.size();++i)
cout<<"values in increasing order(in meter):"<<szamok[i]<<"\n";


}
