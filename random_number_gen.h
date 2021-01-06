//
// Created by Jon on 1/3/2021.
//

#ifndef RAY_RANDOM_NUMBER_GEN_H
#define RAY_RANDOM_NUMBER_GEN_H
#include <stdlib.h>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<> dis(0.0,1.0);

inline double random_float(){
    return dis(gen);
}
#endif //RAY_RANDOM_NUMBER_GEN_H
