/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "frc/WPILib.h"
using namespace frc;

class OI {
  private:
    JoystickButton* winchUpButton;
    JoystickButton* winchDownButton;
    Joystick* winchJoy;
  public:
    OI();
    JoystickButton* getWinchUpButton();
    JoystickButton* getWinchDownButton();
    Joystick* getWinchJoy();
};
