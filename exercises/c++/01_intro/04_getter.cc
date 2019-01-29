#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;



/********************
*
* Getters
*
* Le funzioni get_int e ger_double implementate con il while(cin>>i) leggerebbero da cin fin tanto che leggeranno un immisionne non valida
* l'esatto contrario della consegna
*********************/


void get_int() {
    int i;
    while(!(cin>>i)) {
        cout<<"\nNo integer"<<endl;   
        cin.clear();
        cin.ignore();
        };
    cout<<"Inserito l'intero "<<i<<endl;
}

void get_double() {
    int d;
    while(!(cin>>d)) {
        cout<<"\nNo double"<<endl;   
        cin.clear();
        cin.ignore();
        };
    cout<<"Inserito il double "<<d<<endl;
}

int main(){
get_int();
get_double();
}
