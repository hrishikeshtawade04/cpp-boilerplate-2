/**
 *  @file  PIDController.h
 *  @copyright Copyright 2018
 *  @brief
 *  Created on: Sep 22, 2018
 *  @author: Saurav Kumar
 *  @author Hrikesh Tawade
 */

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_
#include <iostream>


using std::cout;
using std::endl;
using std::cin;
/**
 * A Class PID_Controller is defined
 */
class PIDController
{
 private:
  float kp,ki,kd; /**< float variable kp,ki,kd are defined */

 public:
  /** constructor**/
    PIDController();
    /** destructor**/
    ~PIDController();
/// @brief define a method which returns double
/// @param float
/// @param float
/// @param int
/// @return double
  double compute(float, float,int);


  void setParamters(float, float,float);//!< a member function.

};



#endif /// INCLUDE_PIDCONTROLLER_H_ ///
