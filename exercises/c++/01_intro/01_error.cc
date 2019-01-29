#include <iostream>

int somma_sbagliata(int a, int b);


int main() {
//std::c0ut<<"Hello"<<std::endl;       //errore c0ut

//int i{0};
//j=1;

//std::cout<<"Ora mi dimentico di mettere il punto e virgola"

//int char{9};
//std::cout<<char<<std::endl;


int a{0};
char b{'z'};
std::cout<<somma_sbagliata(a,b)<<std::endl; //questa funziona

int x{1};
float y{1.2};
std::cout<<somma_sbagliata(x,y)<<std::endl; //funaziona uguale

//std::string z={"prova con una stringa"}; //non funziona
//std::cout<<somma_sbagliata(x,z)<<std::endl;

}

int somma_sbagliata(int a,int b) {return a+b;}

