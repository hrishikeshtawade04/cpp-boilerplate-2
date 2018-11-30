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
 *  @file    test.cpp
 *
 *  @author  Hrishikesh Tawade
 *
 *  @copyright BSD License
 *
 *  @brief Unit tests
 *
 *  @section DESCRIPTION
 *
 *  This program runs unit tests on PID controller Class by mocking
 *  Parameters Class
 */

#include <gtest/gtest.h>
#include "../include/PIDController.h"
#include "../include/Parameters.h"
#include "gmock/gmock.h"
using ::testing::AtLeast;
using ::testing::_;
using ::testing::Return;
using ::testing::Sequence;
/**
 * @brief Mock of class Parameters
 */
class MockParameters : public Parameters {
 public:
  MOCK_METHOD0(getKp, double());
  MOCK_METHOD0(getKd, double());
  MOCK_METHOD0(getKi, double());
};

/**
 * @brief Tests convergence of compute method
 */
TEST(PIDControllerTest, convergenceTest) {
  MockParameters para;
  EXPECT_CALL(para, getKp())  /// #1
      .Times(100).WillRepeatedly(Return(0.6));
  EXPECT_CALL(para, getKi())  /// #2
      .Times(100).WillRepeatedly(Return(0.1));
  EXPECT_CALL(para, getKd())  /// #3
      .Times(100).WillRepeatedly(Return(0.003)); 
  PIDController instancePID(&para);
  EXPECT_NEAR(15.0, instancePID.compute(15.0, 1.0, 100), 1.0);

}

/**
 * @brief Tests bump on compute method
 */

TEST(PIDControllerTest, bumpTest) {
  MockParameters para;
  EXPECT_CALL(para, getKp())  /// #1
      .Times(200).WillRepeatedly(Return(0.6));
  EXPECT_CALL(para, getKi())  /// #2
      .Times(200).WillRepeatedly(Return(0.1));
  EXPECT_CALL(para, getKd())  /// #3
      .Times(200).WillRepeatedly(Return(0.003));
  PIDController instancePID(&para);
  auto newVelocity = 0.0;
  newVelocity = instancePID.compute(15.0, 1.0, 100);

  EXPECT_NEAR(5.0, instancePID.compute(5.0, newVelocity, 100), 1.0);
}

