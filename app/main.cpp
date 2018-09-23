
    /** @file main.cpp
     *  @copyright Copyright 2018
     *  @brief
     *  Defines  a class PidController with kp,ki and kd as private member and
     *  compute and setParamters as methods.
     *
     *  It takes target setpoint and actual velocity as two inputs and run the method compute which return a constant value 10.0
     *
     *  @author Saurav Kumar
     *  @author Hrikesh Tawade
     */#include <iostream>
#include "../include/PIDController.h"

int main()
{
  PIDController pidVelocity;//!< an object pidVelocity defined
   pidVelocity.setParamters(1.0,2.0,3.0); //!< setParameters method is called for pidVelocity
   cout << pidVelocity.getKd()<<endl;
   
    float targetSetpoint, actualVelocity;/**< float variable targetSetpoint and actualVelocity are defined */
    int iteration;/**< int variable iteration defined */
    cout << "Enter target setpoint of velocity in m/min"<<endl;
    cin >> targetSetpoint;
    cout << "Enter actual velocity in m/min"<<endl;
    cin>> actualVelocity;
    cout << "Enter the number of iteration"<<endl;
    cin>> iteration;
    cout << "New Velocity = "<< pidVelocity.compute(targetSetpoint,actualVelocity,iteration)<<endl; //!< compute method is called for pidVelocity
    return 0;

}
