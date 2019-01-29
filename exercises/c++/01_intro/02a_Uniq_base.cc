#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;


int main(){

/**************************
*
*   Uniqe che conta ed elimina le ripetizioni di righe 
*
*************************/
    
int rep{0};
string line{""};    //linea corrente
string pre_line{""};//linea precedente
string testo{""};   //stampa finale

while(getline(cin,line)) {
    if(line!=pre_line) {testo+=line+"\n"; pre_line=line;}
    else {rep++;}
    };



cout<<"\n\nNumero ripetizioni: "<<rep<<"\n"<<testo<<endl;

}
