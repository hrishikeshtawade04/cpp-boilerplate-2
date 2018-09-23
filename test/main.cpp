/** @file main.cpp
 *  @copyright Copyright 2018
 *  @brief
 *  Runs unit tests using google gtest framework.
 *  @author Saurav Kumar
 *  @author Hrishikesh Tawade
 */

#include <gtest/gtest.h>

/**
 * @brief commands all tests to run
 * @param argc argument count
 * @param argv argument vector
 * @return 0 when no failures encountered
 *         1 when failures encountered
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
