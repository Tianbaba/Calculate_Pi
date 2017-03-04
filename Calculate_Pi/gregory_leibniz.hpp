//
//  gregory-leibniz.hpp
//  Calculate_Pi
//
//  Created by Tianyi He on 2/24/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#ifndef gregory_leibniz_hpp
#define gregory_leibniz_hpp

#include <stdio.h>
#include "pi_calculator.hpp"
class GregoryLeibniz: public PiCalculator{

protected:
    double get_pi_error(double tolerance);
};

#endif /* gregory_leibniz_hpp */
