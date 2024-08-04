#include "MoveCommand.h"

namespace GameDev
{
  namespace Patterns
  {
    MoveCommand::MoveCommand(MoveDirection direction)
      : _direction(direction)
    {
    }

    void MoveCommand::Execute(std::shared_ptr<GameActor> actor)
    {
      actor->Move(_direction);
    }

    void MoveCommand::Undo(std::shared_ptr<GameActor> actor)
    {
      auto oppositeDirection = GetOppositeDirection();
      actor->Move(oppositeDirection);
    }

    MoveDirection MoveCommand::GetOppositeDirection() const
    {
      switch (_direction)
      {
      case MoveDirection::North:
        return MoveDirection::South;
      case MoveDirection::East:
        return MoveDirection::West;
      case MoveDirection::South:
        return MoveDirection::North;
        break;
      case MoveDirection::West:
        return MoveDirection::East;
      default:
        break;
      }
    }
  }
}