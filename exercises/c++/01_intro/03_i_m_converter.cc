#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

/*********************
*
* Inches converter
*
*********************/




int main() {
   
double e;
cout<<"Measure to convert in meters: ";

while(!(cin>>e))
{cout<<"\nNo numeric input"<<endl; cin.clear();cin.ignore();};

cout<<e<<" inches = "<<0.0254*e<<" meters"<<endl;


}
