//
//  main.cpp
//  Calculate_Pi
//
//  Created by Tianyi He on 2/24/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "gregory_leibniz.hpp"
#include "nilakantha.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int digit = 4;
    
    std::cout << "Calculating Pi within " << digit << " digits.\n";
    Nilakantha *pi_calculator_nil = new Nilakantha();
    GregoryLeibniz *pi_calculator_gl = new GregoryLeibniz();
    
    double my_pi_gl = pi_calculator_gl->get_pi_digit(digit);
    double my_pi_nil = pi_calculator_nil->get_pi_digit(digit);

    
    std::cout << "Gregory-Leibniz " << std::to_string(my_pi_gl) << "\n";
    std::cout << "Nilakantha " << std::to_string(my_pi_nil) << "\n";

    return 0;
}

