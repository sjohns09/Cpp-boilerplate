// "Copyright [2017] <Copyright MichaelKam>"
/*
 * PIDControllerTest.cpp
 *
 *  Created on: Sep 25, 2017
 *      Author: viki
 */
#include <gtest/gtest.h>
#include "PIDController.h"
#include <iostream>
using std::cout;
using std::endl;

TEST(PIDControllerTest, computePositiveNewPosition) {
  PIDController PID;
  const double e = 200;
  EXPECT_LT(0, PID.computeNewPosition(e));
}

TEST(PIDControllerTest, computeNegativeNewPosition) {
  PIDController PID;
  const double e = -200;
  EXPECT_GT(0, PID.computeNewPosition(e));
}

TEST(PIDControllerTest, computeNewVelocity) {
  PIDController PID;
  double targetSetPoint = 70;
  double actualVelocity = 20;
  EXPECT_EQ(2000, PID.computeNewVelocity(targetSetPoint, actualVelocity));
}

