#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;


/**************************
*
*   Uniqe che conta ed elimina le ripetizioni di righe e parole
*
*************************/

int main(){
    

string line{""}; // stringa di input
string pre_line{""}; //stringa di comparazione tra linee
string clean_line{""}; //stringa pulita dalle rip consec in linea
string testo{""}; //testo finale

string word{""}; //parola estrapolata nella lettura della stringa
string pre_word{""}; //parola precedente alla word corrente
int word_rep{0};          //numero di ripetioni di parole
int line_rep{0};          //numero di ripetioni di righe

while(getline(cin,line)) {

    int i{0};
    
     while(i<line.length()) {
     //scansione riga
        while(line[i]!=' ' && i<line.length()) {word+=line[i];++i;};
        //scansione parola
        if(word!=pre_word && word!="") {//se la parola è != dalla prec. la scrive nella clean_line
            clean_line+=word+" ";
            pre_word=word;
            word="";
            i++;}
        else {word="";i++;word_rep++;};
         };

    if(clean_line!=pre_line) {//se la riga è !=dalla prec. scrive la clean_line nel testo finale
        testo+=clean_line+"\n"; 
        pre_line=clean_line;
        clean_line="";}
    else {clean_line="";line_rep++;}
    };



cout<<testo<<endl;

}
