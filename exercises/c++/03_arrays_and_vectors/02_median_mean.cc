#include<iostream>
#include<iomanip>
#include<vector>
#include<array>
#include <cmath>
#include <typeinfo>
#include<fstream>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::array;

double mean(double* p, int l);



int main() {

   std::ifstream temperatures;
   temperatures.open("temperatures.txt");
   int num_lines{0}; 
   double elemento;
   std::vector<double> t{};
   while(!temperatures.eof())  {temperatures>>elemento;t.push_back(elemento);num_lines++;};
   
   t.erase (t.begin()+50);
   std::sort( t.begin(), t.end() );
   double* p=&t[0];
   int l=t.size();
   double MEAN;
   MEAN=mean(p,num_lines-1);
   cout<<"mean "<<MEAN<<endl;
   
   if(num_lines%2==1) {
       cout<<"median "<<t[(num_lines)/2]<<endl;}
       
    else {cout<<"median "<<t[(num_lines-1)/2]<<" "<<t[(num_lines-1)/2+1]<<endl;}
  
  
  return 0;
}


double mean(double* p, int l){

    double m;
    double* end{p+l};
    for( ; p!=end; p++) {m+=*p;};
    return m/l;
}




