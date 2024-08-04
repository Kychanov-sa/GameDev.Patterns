#include "CommandFactory.h"
#include "MoveCommand.h"
#include "ExploreCommand.h"
#include "QuitCommand.h"

namespace GameDev
{
  namespace Patterns
  {
    Command* CommandFactory::CreateCommand(GameAction action)
    {
      switch (action)
      {
      case GameAction::MoveNorth:
        return new MoveCommand(MoveDirection::North);
      case GameAction::MoveEast:
        return new MoveCommand(MoveDirection::East);
      case GameAction::MoveSouth:
        return new MoveCommand(MoveDirection::South);
      case GameAction::MoveWest:
        return new MoveCommand(MoveDirection::West);
      case GameAction::Explore:
        return new ExploreCommand();
      case GameAction::QuitGame:
        return new QuitCommand();
      default:
        return nullptr;
      }
    }
  }
}