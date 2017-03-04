//
//  nilakantha.cpp
//  Calculate_Pi
//
//  Created by Tianyi He on 3/4/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#include "nilakantha.hpp"
#include <iostream>
#include <cmath>


double Nilakantha::get_pi_error(double tolerance){
    double sum = 3.0;
    double deviation = 1;
    int term = 1;
    
    while (deviation > tolerance)
    {
        double denominator = 1;
        for (int denominator_term = term * 2; denominator_term < term * 2 + 3; denominator_term++) {
            denominator = denominator * denominator_term;
        }
        deviation = 4.0 / denominator;
        if (term % 2 == 1) {
            sum += deviation;
        }
        else {
            sum -= deviation;
        }
        term++;
        
    }
    std::cout << std::to_string(term) + " Iteration completed.\n";
    return sum ;
}
