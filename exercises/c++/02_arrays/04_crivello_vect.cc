#include<iostream>
#include<vector>
#include <cmath>
#include <typeinfo>


using std::cout;
using std::cin;
using std::endl;


void write(std::vector<int>& v);

template<class T>
void print(std::vector<T>& v);

void crivello(std::vector<int>& v ,int n);



int main() {

    int  n;
    cout<<"Dammi un n: "<<endl;
    cin>>n;
    std::vector<int>  v(n-1,0);
    write(v); 
    crivello(v,n);
    print(v);

}


template<class T>
void print(std::vector<T>& v)  {
    cout<<"i primi fino a "<<v.size()+1<<" sono:"<<endl<<endl;
    for(auto& x:v) {if(x!=0) {cout<<x<<endl;} } //stampa solo gli elementi diversi da 0
}

void write(std::vector<int>& v){ 
    int i{2};
    for(auto& x:v) {x=i;i++;} //scrive il vettore v composto da tutti in numeri fino a n
}

void crivello(std::vector<int>& v ,int n){
    int i{2};
    for(;i<sqrt(n);i++){
        if(v[i]!=0){
            int j{i};
            while(j<n) {j++;if(j%i==0) {v[j-2]=0;};}; //azzera tutti   gli elementi multipli di i       
        };      
    }
}
