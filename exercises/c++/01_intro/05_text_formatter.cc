#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;




int main() {
    
    int n{20};
    cout<<"Line length: ";
    cin>>n;
    cout<<endl;
    
    string line{""},testo{""},word{""}; 
    while(getline(cin,line)) {
        int i{0},j{0};
            while(i<line.length()) { //scansione della riga
                string word{""};
                while(line[i]!=' ' && i<line.length()) {word+=line[i];j++;i++;}; //scrive la parola corrente
                if(j<n) {testo+=word+" ";word="";j++;i++;} //se non si è sforato la parola viene messa nella riga
                else {i-=word.length(); testo+="\n"; j=0;};//si va a capo e si riparte dall'indice dell'ultima parola
                };
        
    testo+="\n";//a capo a fine linea
    };
    cout<<"\n\n"<<testo<<endl;
}


