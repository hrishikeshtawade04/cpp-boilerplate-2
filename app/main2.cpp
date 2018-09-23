
    /** @file main2.cpp
     *  @copyright Copyright 2018
     *  @brief      *
     *  Defines  a class PidController with kp,ki and kd as private member and
     *  compute and setParamters as methods.
     *
     *  It takes target setpoint and actual velocity as two inputs and run the method compute which return a value 10.0
     *
     *  @author Saurav Kumar
     *  @author Hrikesh Tawade
     */
#include <iostream>
#include "../include/PIDController.h"


using std::cout;
using std::endl;
using std::cin;

///constructor for class PIDController.
PIDController::PIDController() {
  kp = 0.0;ki=0.0;kd=0.0;
}
/// destructor for class PIDController.
PIDController::~PIDController() {
}
///
/// @param targetSetpoint
/// @param actualVelocity
/// @param int
/// @return
double PIDController::compute(float targetSetpoint, float actualVelocity,int iteration)//!< a member function which returns constant 10.0
  {
  return 10.0;
  }

  /**
    *
    * @param kp
    * @param ki
    * @param kd
    * @return null
    */
  void PIDController::setParamters(float kp, float ki,float kd)//!< a member function.
    {
     this->kp=kp;
     this->ki=ki;
     this->kd=kd;

    }
double PIDController::getKp()
{
  
  return this->kp;
}
double PIDController::getKd()
{
  return this->kd;
}
double PIDController::getKi()
{
  return this->ki;
}
