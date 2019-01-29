#include<iostream>
#include<array>

using std::cout;
using std::endl;
using std::cin;



enum class Month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
const std::array<int,12> index_mesi {31,28,31,30,31,30,31,31,30,31,30,31};
const std::array<int,12> index_mesi_leap {31,29,31,30,31,30,31,31,30,31,30,31};

class DATA {
    int giorno;
    int mese;
    int anno;
    
    public:
    DATA(const int d, const int m, const int y):
    giorno{d},
    mese{m},
    anno{y}

    
    {}
    
        int day() const {return giorno;}
        int month() const {return mese;}
        int year() const {return anno;}
        
       
        
        void add_day (int a);
        bool leap (const auto anno);
        int anno_nuovo (const int i);
        int mese_nuovo(const int num_giorno);
        
    ~DATA() {}
    
  
};


template <typename T>
std::ostream& operator<<(std::ostream& os, const DATA& d){
    os << d.day() << "/" << d.month() << "/" << d.year() <<std::endl;
    return os;
 }

bool operator==(DATA& a,DATA& b ) {

    if(a.day()==b.day() and a.month()==b.month()  and  a.year()==b.year()) return true;
    return false;

}



//**************************************************
int main() {
    DATA oggi{28,2, 2020};
    DATA oggi_bis{28,2, 2020};
    std::cout<<oggi.day()<<"/"<<oggi.month()<<"/"<<oggi.year()<<std::endl;
    bool g{(oggi==oggi_bis)};
    std::cout<<g<<std::endl;
    //std::cout<< oggi<<std::endl;
    int n;
    cin>>n;
    oggi.add_day(n);
    std::cout<<oggi.day()<<"/"<<oggi.month()<<"/"<<oggi.year()<<std::endl;
    
}


//*********************************************+


void DATA::add_day (int a) {
            int num_giorno{giorno+a};
            int M{mese};
            if (M>1) {if (leap(anno)==true) while(M>0) {{num_giorno+=index_mesi_leap[M-2];M--;};}
                      else {while(M>0) {num_giorno+=index_mesi[M-2];M--;};};};
            int n=anno_nuovo(num_giorno);
            num_giorno=num_giorno-n;
            giorno=mese_nuovo(num_giorno);
 }



bool DATA::leap (const auto anno) {
    bool p{false};
    if (anno%4==0 || anno%400==0) {p=true;};
    return p;
}   



int DATA::anno_nuovo (const int i) {
    int n{365};
    if(leap(anno)==true) {n=366;};
    while (n<i) {
        if (leap(anno)==true) 
            {n+=365;anno++;}
        else {n+=366;anno++;};
        };
        
    return n-365-leap(anno);
}



int DATA::mese_nuovo(const int num_giorno) {
    int i{0};
    int M=0;
    if (leap(anno)==true) {while (i<num_giorno) {i+=index_mesi_leap[M];M++;}} 
    else {while (i<num_giorno) {i+=index_mesi[M];M++;}}
    mese=M;
    return num_giorno+(1-leap(anno))*index_mesi[M-1]+leap(anno)*index_mesi_leap[M-1]-i;
}





