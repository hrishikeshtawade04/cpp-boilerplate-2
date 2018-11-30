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
 *  @file    Parameters.h
 *
 *  @author  Hrishikesh Tawade
 *
 *  @copyright BSD License
 *
 *  @brief Library for Paramters Class
 *
 *  @section DESCRIPTION
 *
 *  This library contains the declarations for the class Parameters
 */

#ifndef INCLUDE_PARAMETERS_H_
#define INCLUDE_PARAMETERS_H_
#include <iostream>

class Parameters {
 public:
  /// Constructor
  Parameters();
  /// Destructor
  virtual ~Parameters();
  /**
   * @brief tells proportional gain of PID controller
   * @return proportional gain kp
   */
  virtual double getKp();
  /**
   * @brief tells differential gain of PID controller
   * @return differential gain kd
   */
  virtual double getKd();
/**
   * @brief tells intergal gain of PID controller
   * @return integral gain ki
 */
  virtual double getKi();
};
#endif  // INCLUDE_PARAMETERS_H_"

