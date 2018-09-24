/** @file main2.cpp
 *  @copyright Copyright 2018
 *  @brief
 *  Shows constructor, destructor, attributes and fucntion implementation of
 *  class PidController.
 *  @author Saurav Kumar
 *  @author Hrikesh Tawade
 */
#include <iostream>
#include "../include/PIDController.h"

using std::cout;
using std::endl;
using std::cin;

/// constructor for class PIDController.
PIDController::PIDController() {
kp = 0.0;
ki = 0.0;
kd = 0.0;
}
/// destructor for class PIDController.
PIDController::~PIDController() {
}

/**
 * @brief computes new velocity based on pid algorithm
 * @param targetSetpoint the velocity to be reached
 * @param actualVelocity the current velocity of system
 * @param iteration number of turns the controller runs
 * @return new velocity
 */
//!< a member function which returns constant 10.0
double PIDController::compute(float targetSetpoint,
                              float actualVelocity, int iteration) {
  return 10.0;  //!< stub implementation
  }

  /**
    *
    * @param kp proportional gain
    * @param ki integral gain
    * @param kd differential gain
    * @return void
    */
//!< a member function.
  void PIDController::setParamters(float kp, float ki, float kd) {
     this->kp = kp;
     this->ki = ki;
     this->kd = kd;
  }
  /**
   * @brief tells proportional gain of PID controller
   * @return proportional gain kp
   */
double PIDController::getKp() {
  return 0.0;
}
/**
   * @brief tells differential gain of PID controller
   * @return differential gain kd
   */
double PIDController::getKd() {
  return 0.0;
}
/**
   * @brief tells intergal gain of PID controller
   * @return integral gain ki
   */
double PIDController::getKi() {
  return 0.0;
}
