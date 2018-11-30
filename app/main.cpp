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
 *  @file    main.cpp
 *
 *  @author  Hrishikesh Tawade
 *
 *  @copyright BSD License
 *
 *  @brief Runs PID controller
 *
 *  @section DESCRIPTION
 *
 *  This program starts the robot
 */
#include <iostream>
#include "../include/PIDController.h"
#include "../include/Parameters.h"
using std::cin;
using std::endl;
using std::cout;
int main() {
  /// Creating Paramter object
  Parameters para;
  /// PID controller to control velocity created
  PIDController pidVelocity(&para);
  auto targetSetpoint = 0.0, actualVelocity = 0.0;
  auto iteration = 0;
  /// Asking target velocity to user
  cout << "Enter target setpoint of velocity in m/min" << endl;
  cin >> targetSetpoint;
  /// Asking actual velocity to user
  cout << "Enter actual velocity in m/min" << endl;
  cin >> actualVelocity;
  /// Asking number of iterations to user
  cout << "Enter the number of iteration" << endl;
  cin >> iteration;
  /// Controlling velocity using PID controller
  cout << "New Velocity = "
      << pidVelocity.compute(targetSetpoint, actualVelocity, iteration) << endl;
  return 0;
}

