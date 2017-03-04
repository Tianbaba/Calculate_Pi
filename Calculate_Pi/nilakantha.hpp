//
//  nilakantha.hpp
//  Calculate_Pi
//
//  Created by Tianyi He on 3/4/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#ifndef nilakantha_hpp
#define nilakantha_hpp

#include <stdio.h>
#include "pi_calculator.hpp"

class Nilakantha: public PiCalculator{
protected:
    double get_pi_error(double tolerance);
};
#endif /* nilakantha_hpp */
