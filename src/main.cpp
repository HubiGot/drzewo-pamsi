#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include <fstream>


#include"kolejka.hh"


using namespace std;




main(){

queue kolejka;
int liczba, prio,i;

cout<<"Kolejka!"<<endl;
for(i=0;i<5;i++)
{
cin>>liczba;
cin>>prio;
kolejka.push(liczba,prio);
}
kolejka.display();

  return 0;
}
