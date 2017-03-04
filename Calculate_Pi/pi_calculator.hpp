//
//  pi-calculator.hpp
//  Calculate_Pi
//
//  Created by Tianyi He on 2/25/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#ifndef pi_calculator_hpp
#define pi_calculator_hpp

#include <stdio.h>
class PiCalculator {
protected:
    virtual double get_pi_error(double error) = 0;
public:
    virtual double get_pi_digit(int digit);
};

#endif /* pi_calculator_hpp */
