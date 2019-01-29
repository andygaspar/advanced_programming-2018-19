#include<iostream>




using std::cout;
using std::cin;
using std::endl;

void print(int*a,int n, int m);



int main() {

    int n,m;
    cin>>n>>m;
    int a[n][m];
    int aT[m][n];
    for (int i{0};i<n;i++) {
        for(int j{0};j<m;j++) {a[i][j]=i*m+j;};
    };
    
    for (int i{0};i<n;i++) {
        for(int j{0};j<m;j++) {aT[j][i]=a[i][j];};
       }
       
    print(*a,n,m);
    cout<<endl;
    print(*aT,m,n);

}




void print(int*a,int n, int m) {
    for (int i{0};i<n;i++) {
        for(int j{0};j<m;j++) {cout<<std::setw(3)<<a[i*m+j];};
        cout<<endl;}
}
