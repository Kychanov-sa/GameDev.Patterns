#include "QuitCommand.h"
#include "Game.h"

namespace GameDev
{
  namespace Patterns
  {
    void QuitCommand::Execute(std::shared_ptr<GameActor> actor)
    {
      actor->GetGame()->Finish();
    }
  }
}
