#include <iostream>

void func1(){
    std::cout<<"Three blind mice\n";
}

void func2(){
    std::cout<<"See how they run\n";
}

int main(){
    func1();
    func1();
    func2();
    func2();
    return 0;
}