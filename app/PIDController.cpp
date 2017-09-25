// "Copyright [2017] <Copyright MichaelKam>"
/*
 * PIDController.cpp
 *
 *  Created on: Sep 24, 2017
 *      Author: viki
 */
#include "PIDController.h"

double PIDController::computeNewVelocity(const double& targetSetPoint,
                                         const double& actualVelocity) {

  double v_cmd = computeNewPosition(targetSetPoint);
  double v_error = v_cmd - actualVelocity;
  return Kp * v_error + Ki * (v_error + sumOfVelocityError) + (Kd * v_error) / T;
}

double PIDController::computeNewPosition(const double& targetSetPoint) {
  double p_error = targetSetPoint - CurrentPosition;
  return Kp * p_error + Ki * (p_error + sumOfPositionError) + (Kd * p_error) / T;
}



