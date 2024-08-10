#include <iostream>
#include "Program.h"

namespace GameDev
{
  namespace Patterns
  {
    void Program::Main()
    {
      std::cout << "Hello World!\n";
      ExitCode = 0;
    }
  }
}