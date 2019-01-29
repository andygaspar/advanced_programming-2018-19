#include<iostream>
#include<vector>
#include <cmath>
#include <typeinfo>


using std::cout;
using std::cin;
using std::endl;


void write(std::vector<int>& v);


void print(std::vector<int>& v);
bool prime(int i);

int main() {

int  n;
cin>>n;
std::vector<int>  v{2};
for (int i{3};i<=n;i+=2)  {if(prime(i)) {v.push_back(i);};};
print(v);


}



void print(std::vector<int>& v)  {
    for(auto& x:v) { cout<<x<<endl;}
}


bool prime(int i) {
    for(int j{3};j<sqrt(i);j+=2) {if (i%j==0) return 0;};
    return 1;
}
