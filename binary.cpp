//Converts unsigned decimal numbers to unsigned binary
//Author: Mixo Malepfane
//Version: 1.0
//Date: 14 Dec 2023
#include <algorithm>
#include <iostream>
#include <string>

std::string toBin(int);

int main()
{
    int number;

    std::cout<<"Decimal to Binary\n***********\n";
    std::cout<<"\nEnter a number: ";
    std::cin>>number;
    
    if(number >= 0)
    {
        std::string binary = toBin(number);
        std::cout<<"Your number("<<number<<") in binary is: "<<binary<<std::endl;
    }
    else{
        std::cout<<"Cannot convert negative numbers!"<<std::endl;
    }
    return 0;
}

std::string toBin(int number)
{
    std::string bin = "";
    
    if(number == 0){
        bin = "0";
    }

    while(number != 0)
    {
        bin += std::to_string(number % 2);
        number = number / 2;
    }

    // Reverse the binary string to get the correct order
    std::reverse(bin.begin(), bin.end());

    return bin;
}
