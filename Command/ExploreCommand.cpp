#include "ExploreCommand.h"

namespace GameDev
{
  namespace Patterns
  {
    void ExploreCommand::Execute(std::shared_ptr<GameActor> actor)
    {
      actor->Explore();
    }
  }
}
