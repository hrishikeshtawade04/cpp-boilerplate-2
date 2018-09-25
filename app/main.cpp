/** @file main.cpp
 *  @copyright Copyright 2018
 *  @brief
 *  Defines  an object pidVelocity of class PidController
 *  and runs its methods and sets its attributes.
 *  @author Saurav Kumar
 *  @author Hrishikesh Tawade
 */
#include <iostream>
#include "../include/PIDController.h"

int main() {
  PIDController pidVelocity;  //!< a PID controller to control velocity created
  pidVelocity.setParamters(1.0, 2.0, 3.0);  //!< sets pid parameters
  cout << pidVelocity.getKd() << endl;
  //!< double variable targetSetpoint and actualVelocity are defined */
  auto targetSetpoint = 0.0, actualVelocity = 0.0;
  auto iteration = 0;  /**< int variable iteration defined */
  cout << "Enter target setpoint of velocity in m/min" << endl;
  cin >> targetSetpoint;
  cout << "Enter actual velocity in m/min" << endl;
  cin >> actualVelocity;
  cout << "Enter the number of iteration" << endl;
  cin >> iteration;
  //!< compute method is called for pidVelocity
  cout << "New Velocity = "
      << pidVelocity.compute(targetSetpoint, actualVelocity, iteration)
      << endl;
  return 0;
}
