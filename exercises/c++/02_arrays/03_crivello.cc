#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;



int* write_a(int* a,size_t n);
void criv(int* a, size_t n);
void print_a(int* a, size_t n);



int main() {
    
    size_t n;
    std::cin>>n;
    int a[n-1];
    write_a(a,n);
    criv(a,n);
    print_a(a,n);   
}




int* write_a(int* a,size_t n) {
   int j{2};
   int* end{a+n-1};
   for(;a!=end;a++) {*a=j;j++;};
   }
 
    
 void criv(int*a, size_t n) {
    size_t m=sqrt(n);
    int* end{a+m};
    int* END{a+n-1};
    for(;a!=end;a++) {
        if(*a!=0) {
            int r{*a},rr{*a};
            int* b{a};
            for( ;b!=END;b++) {if(r%rr==0 && r!=rr) {*b=0;};r++;};
            };
        };     
    }
 
 
 void print_a(int*a, size_t n){    
     int* end{a+n-1};
     cout<<endl<<endl;
     for(; a!=end;a++) {if (*a!=0) {cout<<*a<<endl;};};
     cout<<endl;
     }
 
 
 
