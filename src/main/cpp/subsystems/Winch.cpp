/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Winch.h"

Winch::Winch() : Subsystem("Winch"), gwinch(new TalonSRX(4)) {}
//constructor
//INSERT PORT NUMBER

void Winch::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}
void Winch::moveWinch(double upPower){
  gwinch->Set(ControlMode::PercentOutput, -upPower);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
