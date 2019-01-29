#include <iostream>
using std::cout;
using std::cin;
using std::endl;


template <typename T> 
T* make_array(const std::size_t n);

template <typename T>
void print_array(T* a,const std::size_t n);

int main () {

    size_t n{4};
    int* a;
    a=make_array<int>(n); 
    print_array(a,n);
    delete[] a;
    a=nullptr;
}

template <typename T>
T* make_array(const std::size_t n) {
    
    T* a{new T [n]};
    for (int j{0};j<n;j++)  {
        a[j]=j;
    }
    return a;
}

template <typename T>
void print_array(T* a,const std::size_t n) {
    const T*  end{a+n-1};
    for (;end>=a;end--)
    {cout<<*end<<endl;};
    }

