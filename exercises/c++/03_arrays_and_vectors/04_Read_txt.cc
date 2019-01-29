#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<array>
#include<cmath>
#include<typeinfo>
#include<fstream>
#include<algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::string;




int main() {

   std::ifstream LittleWoman;
   LittleWoman.open("LittleWoman.txt");
   int num_lines{0}; 
   string element;
   std::vector<string> text{""};
   int i{0};
   int n{1};
   bool rep{false};
   std::vector<int> rep_vect{0};
   
   
   
   while(!LittleWoman.eof())  {
        LittleWoman>>element;
        
        
        int lettera{0};
        char c;
        string clean_element{""};
        while (element[lettera]) {
            if(element[lettera]!='.' && element[lettera]!=',' 
               && element[lettera]!='(' && element[lettera]!=')' && element[lettera]!='"' 
               && element[lettera]!='!' && element[lettera]!=47 && element[lettera]!=39 && element[lettera]!='?'
               && element[lettera]!=58 && element[lettera]!=';' && element[lettera]!=':' && element[lettera]!='_' 
               && element[lettera]!='-' && element[lettera]!='&' && element[lettera]!='*')
            {
            c=element[lettera];
            c=tolower(c);
            lettera++;
            clean_element+=c;}
            
            else {lettera++;};
            };
        for (int j{0};j<n;j++)  {if(clean_element==text[j])  {rep=true;    rep_vect[j]++;   break;}  };
           if (rep==false) {text.push_back(clean_element);   n++   ;rep_vect.push_back(1);};
           rep=false;
           i++;
       
    
   };
   
    
    
   cout<<"\n\n\n"<<endl;
   for(int t{0};t<text.size();t++) {cout<<std::setw(25)<<text[t]<<" "<<rep_vect[t]<<endl;};
   cout<<endl<<endl;
  
  
  return 0;
}







