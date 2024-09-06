#include <iostream>

using namespace std;

int main(){
    std::cout<<"输入身高(cm):___\b\b\b";
    int height;
    std::cin>>height;
    const int cm2m=100;
    int cm=height%cm2m;
    int m=height/cm2m;
    std::cout<<"你的身高为"<<m<<"m"<<cm<<"cm"<<std::endl;
    return 0;
}