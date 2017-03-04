//
//  pi-calculator.cpp
//  Calculate_Pi
//
//  Created by Tianyi He on 2/25/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#include "pi_calculator.hpp"
#include <cmath>

double PiCalculator::get_pi_digit(int digit) {
    double base = 10;
    double tolerance = pow(base, -1 * digit);
    
    return get_pi_error(tolerance);
}

