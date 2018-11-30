/**
 *
 * BSD 3-Clause License
 * Copyright (c) 2018, Hrishikesh Tawade
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *  @copyright (c) BSD
 *
 *  @file    PIDController.cpp
 *
 *  @author  Hrishikesh Tawade
 *
 *  @copyright BSD License
 *
 *  @brief PIDController Class implementation
 *
 *  @section DESCRIPTION
 *   
 *  This Class implements the PID algorithm to control velocity.
 */
#include <iostream>
#include "../include/PIDController.h"
using std::cout;
using std::endl;
using std::cin;

PIDController::~PIDController() {
}

double PIDController::compute(double targetSetpoint, double actualVelocity,
                              int iteration) {
  auto last_error = 0.0;
  auto error_sum = 0.0;
  auto dt = 0.1;
  /// Controlling given velocity using PID algorithm
  /// for given number of iterations
  do {
    auto new_error = targetSetpoint - actualVelocity;
    auto error_diff = new_error - last_error;
    error_sum += dt * new_error;
    last_error = new_error;
    getParameters();
    /// Calculated Proportional term
    auto prop_term = kp_ * new_error;
    /// Calculated derivative term
    auto der_term = kd_ * (error_diff / dt);
    /// Calculated Integral term
    auto int_term = ki_ * error_sum;
    auto manipulated_variable = int_term + der_term + prop_term;
    actualVelocity = actualVelocity + manipulated_variable;
    iteration--;
  } while (iteration != 0);
  return actualVelocity;
}

void PIDController::getParameters() {
  /// Using Paramters class object to set PID paramters
  kp_ = parameter->getKp();
  ki_ = parameter->getKi();
  kd_ = parameter->getKd();
}


