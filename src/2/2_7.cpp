#include <iostream>

void hourAndMinute(int h,int m){
    if(h<0||h>24){
        std::cerr<<"小时数不合理"<<std::endl;
        return;
    }
    if(m<0||m>60){
        std::cerr<<"分钟数不合理"<<std::endl;
        return;
    }
    std::cout<<"Time: "<<h<<":"<<m<<std::endl;
    return;

}

int main(){
    int h=0,m=0;
    std::cout<<"Enter the number of hours:";
    std::cin>>h;
    std::cout<<"Enter the number of minutes:";
    std::cin>>m;
    hourAndMinute(h,m);
    return 0;
}