// "Copyright [2017] <Copyright MichaelKam>"
/** @file main.cpp
 * @brief main.cpp is for the Week4. It is required to create a new class
 * declaration for a PID controller (Links to an external site.) that computes
 *  a new velocity given a target setpoint and actual velocity.
 *
 * Details.
 */
#include <iostream>
#include <lib.hpp>
#include "PIDController.h"
using std::cout;
using std::endl;



int main() {
  PIDController PIDForUAV;
  double targetSetPoint = 70;  // set targetSetPoint=70
  double actualVelocity = 20;
  double NewVelocity;
  NewVelocity = PIDForUAV.computeNewVelocity(targetSetPoint, actualVelocity);
  cout << "NewVelocity= " << NewVelocity << endl;
  return 0;
}
