/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>
#include "commands/spinWinch.h"

OI::OI() : winchJoy(new Joystick(0)), winchUpButton(new JoystickButton(winchJoy, 1)), winchDownButton(new JoystickButton(winchJoy, 2)){
  winchUpButton->WhenPressed(new spinWinch(0.5));
  winchDownButton->WhenPressed(new spinWinch(-0.5));
  // Process operator interface input here.
}
JoystickButton* OI::getWinchDownButton(){
  return winchDownButton;
}
JoystickButton* OI::getWinchUpButton(){
  return winchUpButton;
}
Joystick* OI::getWinchJoy(){
  return winchJoy;
}