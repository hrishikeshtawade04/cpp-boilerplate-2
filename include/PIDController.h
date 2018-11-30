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
 *  @file    PIDController.h
 *
 *  @author  Hrishikesh Tawade
 *
 *  @copyright BSD License
 *
 *  @brief Library for PID Controller
 *
 *  @section DESCRIPTION
 *
 *  This library contains the declarations for the class PIDController
 */

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_
#include <iostream>
#include "../include/Parameters.h"

/**
 * @brief PIDController class to implement PID algorithm.
 */
class PIDController {
 private:
  /// Object of Parameter class
  Parameters* parameter;
  /// PID parameters
  double kp_;
  double ki_;
  double kd_;

 public:
  /// constructor
  explicit PIDController(Parameters* para)
      : parameter(para) {
    kp_ = 0.0;
    ki_ = 0.0;
    kd_ = 0.0;
  }
  /// destructor
  ~PIDController();
  /**
   * @brief computes new velocity based on PID algorithm
   * @param double targetSetpoint
   * @param double actualVelocity
   * @param int iterations
   * @return double new velocity
   */
  double compute(double, double, int);
    /**
     * @brief gets kp, ki, kd from Paramters class
     * @return nothing
     */
  void getParameters();
};

#endif  // INCLUDE_PIDCONTROLLER_H_"

