#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <gmp.h>
#include <boost/multiprecision/gmp.hpp>  

boost::multiprecision::mpz_int bintodec(std::string input)
{
    boost::multiprecision::mpz_int res;
    double count = 0;
    for (long long int i = input.length() - 1; i >= 0; i--)
    {
        if(input[i] != '0'){
            res += boost::multiprecision::pow(boost::multiprecision::mpz_int(2),count);
        }
        count++;
    }
    return res;
}

int main(){
    std::string input;
    std::cin >> input;

    std::cout << bintodec(input) << "\n";
}
