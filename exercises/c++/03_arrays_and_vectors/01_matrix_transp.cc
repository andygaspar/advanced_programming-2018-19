#include<iostream>
#include<iomanip>
#include<vector>
#include<array>
#include <cmath>
#include <typeinfo>


using std::cout;
using std::cin;
using std::endl;
using std::array;


void write(auto*p, int l);
void print(auto*p,int n, int m);
void trasp(auto*a,int m, int n);

int main() {

int n{4};
int m{5};
array <double,20> a;
auto* p=&a[0];
write(p,n*m);
print(p,n,m);
trasp(p,n,m);
cout<<endl;
print(p,m,n);


}




void write(auto*p, int l)  {

    auto* end{p+l};
    int i{0};
    for ( ; p!=end;p++) {*p = i+1;i++;};

}


void trasp(auto*p,int n, int m) {

    array<double,20> b;
    auto* end{p+m*n};
    auto* pp=p;
    for(int j{0}; j<n;j++) {
        for(int i{0};i<m;i++) {b[i*n+j]=*p;p++;};
    };  
    for(auto i:b) {*pp=i;pp++;};
    
}

void print(auto*p,int n, int m) {

    auto* end{p+n*m};
    int i{0},j{1};
    for ( ; p!=end;p++) {cout<<std::setw(3)<<*p;if (j==m){cout<<endl;j=1;} else {j++;};};

}



