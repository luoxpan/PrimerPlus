#include <iostream>

double light2ast(double light_year){
    return 63240*light_year;
}

int main(){
    std::cout<<"Enter the number of light years:";
    double light_year=0;
    std::cin>>light_year;
    std::cout<<light_year<<" light years = "<<light2ast(light_year)<<" astronomical units\n";
    return 0;
}