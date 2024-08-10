// Singleton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Program.h"

using namespace GameDev::Patterns;

int main()
{
  auto program = Program::GetInstance();
  program.Main();

  return Program::GetInstance().ExitCode;
}
