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
 * @brief Tests convergence of compute method
 */
TEST(PIDControllerTest, convergenceTest) {
  PIDController instancePID;
  instancePID.setParamters(0.6, 0.1, 3.0);

  EXPECT_NEAR(15.0, instancePID.compute(15.0, 1.0, 100), 1.0);
}

/**
 * @brief Tests bump on compute method
 */

TEST(PIDControllerTest, bumpTest) {
  PIDController instancePID;
  instancePID.setParamters(0.6, 0.1, 3.0);
  auto newVelocity = 0.0;
  newVelocity = instancePID.compute(15.0, 1.0, 100);

  EXPECT_NEAR(5.0, instancePID.compute(5.0, newVelocity, 100), 1.0);
}
