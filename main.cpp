//
//  main.cpp
//  TestingTesting123
//
//  Created by Leo Pierard on 04/08/2024.
//

#include <iostream>
#include <string>
#include <random>
#include <unistd.h>


#include "include/RandomGenerator.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Generate a random number.";
    int x;
    int y;
    int destination;
    std::cout << "\noffset is ";
    std::cin >> x;
    std::cout << "\nrange is ";
    std::cin >> y;
    RandomizeNumber(destination, x, y);
    std::cout << "Random number is " << destination << ".";
    
    bool test;
    RandomizeBool(test);
    if(test){
        std::cout << "\nrandom bool is true \n";
    }
    else if(!test){
        std::cout << "\nrandom bool is false \n";
    }

    
    return 0;
}
