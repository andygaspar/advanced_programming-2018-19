#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


int div(int j);
void print_a(int* a);

int main() {
    int a[50]{};
    a[0]=2;
    int j{1};
    for (int i{1};i<50;i++) {
        if(div(i*2+1)==0) {a[j]=i*2+1;j++;}
            };
    print_a(a);
}


int div(int j){
    for (int i{3};i<=sqrt(j);i+=2) {
        if(j%i==0) {return j;};}
    return 0;
}

void print_a(int* a) {
    while(*a!=0) {cout<<*a<<endl;a++;};
}
