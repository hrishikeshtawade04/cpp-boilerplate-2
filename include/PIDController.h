/**
 *  @file  PIDController.h
 *  @copyright Copyright 2018
 *  @brief defines members, attributes, constructor and destructor ofPIDController class
 *  Created on: Sep 22, 2018
 *  @author: Saurav Kumar
 *  @author Hrishikesh Tawade
 */

#ifndef HW3_CPP_BOILERPLATE_INCLUDE_PIDCONTROLLER_H_
#define HW3_CPP_BOILERPLATE_INCLUDE_PIDCONTROLLER_H_
#include <iostream>


using std::cout;
using std::endl;
using std::cin;
/**
 * @brief PIDController class to implement PID algorithm.
 */
class PIDController {
 private:
  float kp, ki, kd;  //!< float variable kp,ki,kd are defined */

 public:
  /** constructor**/
    PIDController();
    /** destructor**/
    ~PIDController();
/**
 * @brief computes new velocity based on PID algorithm
 * @param float targetSetpoint
 * @param float actualVelocity
 * @param int iterations
 * @return double new velocity
 */
  double compute(float, float, int);
/**
 * @brief tells proportional gain of PID controller
 * @return proportional gain kp
 */
  double getKp();
/**
  * @brief tells differential gain of PID controller
  * @return differential gain kd
  */
  double getKd();
/**
 * @brief tells intergal gain of PID controller
 * @return integral gain ki
 */
  double getKi();
/**
 * @brief sets pid parameters kp, ki, kd
 * @param float kp
 * @param float ki
 * @param float kd
 */
void setParamters(float, float, float);  //!< a member function.
};



#endif  // HW3_CPP_BOILERPLATE_INCLUDE_PIDCONTROLLER_H_"  /// INCLUDE_PIDCONTROLLER_H_ ///
