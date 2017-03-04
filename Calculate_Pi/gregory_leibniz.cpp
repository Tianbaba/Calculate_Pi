//
//  gregory-leibniz.cpp
//  Calculate_Pi
//
//  Created by Tianyi He on 2/24/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#include "gregory_leibniz.hpp"
#include "pi_calculator.hpp"
#include <iostream>
#include <cmath>


double GregoryLeibniz::get_pi_error(double tolerance){
    double sum = 0;
    double deviation = 1;
    int term = 0;
    while (deviation > tolerance)
    {
        double denominator = (2.0 * term + 1);
        deviation = 4.0 / denominator;
        if (term % 2 == 0) {
            sum += deviation;
        }
        else {
            sum -= deviation;
        }
        term++;        
    }
    std::cout << std::to_string(term) + " Iteration completed.\n";
    return sum;
}

