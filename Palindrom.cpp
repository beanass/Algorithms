//
// Created by Anass  on 20.06.23.
//

#include "Palindrom.h"
#include <iostream>
#include <vector>

Palindrom::Palindrom(int x) {
    if(isPalindrom(x)){
        this->x = x;
        std::cout<< x << " is a palindrom" << std::endl;
    }
    else{
        std::cout<<"This is not a Palindrom" <<std::endl;
    }
}

bool Palindrom::isPalindrom(int x) {
    if(x >= 0)
    {
        int x_copy = x;
        int palindrom = 0;
        do{
            palindrom = palindrom*10 + x_copy%10;
            x_copy/=10;
        }while(x_copy>0);
        if(palindrom == x)
            return true;
    }
    return false;
}

bool Palindrom::isPalindrom_vector(int x) {
    std::vector<int> digits;
    if(x >= 0){
        do{
            digits.push_back(x%10);
            x /= 10;
        }while(x>0);
        int size = digits.size();
        for (int j = 0; j < size; ++j) {
            if(digits[j] != digits[size-1-j])
                return false;
        }
        return true;
    }
    return false;
}
