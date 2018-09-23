/** @file test.cpp
 *  @copyright Copyright 2018
 *  @brief
 *  Tests parameterSetting method and compute method
 *  @author Saurav Kumar
 *  @author Hrishikesh Tawade
 */
#include <gtest/gtest.h>
#include "PIDController.h"


/**
 * @brief Tests parameterSetting method
 */
TEST(PIDControllerTest, parameterSetting) {
  PIDController instancePID;
  instancePID.setParamters(1.0, 2.0, 3.0);

  EXPECT_EQ(1.0, instancePID.getKp());
  EXPECT_EQ(2.0, instancePID.getKi());
  EXPECT_EQ(3.0, instancePID.getKd());
}

/**
 * Tests compute method
 */
TEST(PIDControllerTest, computeFunctionOutput) {
  PIDController instancePID;
  instancePID.setParamters(1.0, 2.0, 3.0);

  EXPECT_EQ(10.0, instancePID.compute(10.0, 1.0, 2));
}
