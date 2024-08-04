#pragma once

#include <iostream>
#include "Command.h"

namespace GameDev
{
  namespace Patterns
  {
    class FireCommand : public Command
    {
    public:
      virtual void Execute(GameActor& actor)
      {
        std::cout << "Fire";
      }
    };
  }
}


