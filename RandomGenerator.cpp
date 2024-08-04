//
//  RandomGenerator.cpp
//  TestingTesting123
//
//  Created by Leo Pierard on 04/08/2024.
//

#include "include/RandomGenerator.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

void RandomizeNumber(int& destination, int offset, int range) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> number(offset, range);

    int random_number = number(rng);

    destination = random_number;
}


void RandomizeBool(bool& variable) {  // Pass by reference using &
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> number(0,1);
    
    if(number(rng) == 1) {
        variable = true;
    }
    else if(number(rng) == 0) {
        variable = false;
    }
}

