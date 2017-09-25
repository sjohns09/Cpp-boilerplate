// "Copyright [2017] <Copyright MichaelKam>"
/*
 * PIDController.h
 *
 *  Created on: Sep 24, 2017
 *      Author: viki
 */

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

/**

 * @brief PIDController is a class

 * @param1 Kp is a pr oportional parameter
 * @param1 Ki is a integral parameter
 * @param1 Kd is a derivative parameter
 * @param1 CurrentPosition is a current position
 * @param1 T is a control period
 * @param1 sumOfVelocityError is a sum of the past velocity error
 * @param1 sumOfPositionError is a sum of the past position error

 */
class PIDController {
 private:
  double Kp = 4;
  double Ki = 3;
  double Kd = 5;
  double CurrentPosition = 0;
  double T = 1000;
  double sumOfVelocityError = 0;
  double sumOfPositionError = 0;

 public:
  /**

   * @brief computeNewVelocity() will calculate a new velocity value based on the
   * targetSetPoint and actualVelocity

   * @param1 targetSetPoint is a desire position
   * @param2 actualVelocity is a current speed of the plant

   * @return New velocity

   */
  double computeNewVelocity(const double& targetSetPoint,
                            const double& actualVelocity);
  /*double computeNewVelocity(const double& targetSetPoint,
                            const double& actualVelocity) {
    double v_cmd = computeNewPosition(targetSetPoint);
    double v_error = v_cmd - actualVelocity;
    return Kp * v_error + Ki * (v_error + sumOfVelocityError)
        + (Kd * v_error) / T;
  }
   ;*/
  /**

   * @brief computeNewPosition() will calculate the new position command for a given target position

   * @param1 i is a target position

   * @return command of new position

   */
  double computeNewPosition(const double& targetSetPoint);
  /* double computeNewPosition(const double& targetSetPoint) {
    double p_error = CurrentPosition - targetSetPoint;
    return Kp * p_error + Ki * (p_error + sumOfPositionError)
        + (Kd * p_error) / T;
  }
   ;*/
};
#endif  // INCLUDE_PIDCONTROLLER_H_
