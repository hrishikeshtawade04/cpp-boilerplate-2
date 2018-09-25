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
  double kp_, ki_, kd_;  //!< double variable kp_,ki__,kd_ are defined */

 public:
  /** constructor**/
    PIDController();
    /** destructor**/
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
 * @brief tells proportional gain of PID controller
 * @return proportional gain kp_
 */
  double getKp();
/**
  * @brief tells differential gain of PID controller
  * @return differential gain kd_
  */
  double getKd();
/**
 * @brief tells intergal gain of PID controller
 * @return integral gain ki_
 */
  double getKi();
/**
 * @brief sets pid parameters kp_, ki_, kd_
 * @param double kp_
 * @param double ki_
 * @param double kd_
 */
void setParamters(double, double, double);  //!< a member function.
};



#endif  // HW3_CPP_BOILERPLATE_INCLUDE_PIDCONTROLLER_H_"  /// INCLUDE_PIDCONTROLLER_H_ ///
