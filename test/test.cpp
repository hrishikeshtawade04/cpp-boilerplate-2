#include <gtest/gtest.h>
#include "PIDController.h"


/**
 * Test class initialization
 */
TEST(PIDControllerTest,parameterSetting) {
  PIDController instancePID;
  instancePID.setParamters(1.0, 2.0, 3.0);

  EXPECT_EQ(1.0, instancePID.getKp());
  EXPECT_EQ(2.0, instancePID.getKi());
  EXPECT_EQ(3.0, instancePID.getKd());
}

/**
 * Test compute method
 */
TEST(PIDControllerTest, computeFunctionOutput) {

  PIDController instancePID;
  instancePID.setParamters(1.0, 2.0, 3.0);

  EXPECT_EQ(10.0, instancePID.compute(10.0, 1.0,2));
}
