#include <iostream>

double f2c(double c){
    return 1.8*c+32.0;
}

int main(){
    std::cout<<"Please enter a Celsius value:";
    double celsius=0;
    std::cin>>celsius;
    std::cout<<celsius<<" Celsius is "<<f2c(celsius)<<" degrees Fahrenit.\n";
    return 0;
}