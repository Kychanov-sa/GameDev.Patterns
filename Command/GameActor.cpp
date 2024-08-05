#include <iostream>
#include "GameActor.h"

namespace GameDev
{
  namespace Patterns
  {
    GameActor::GameActor(std::shared_ptr<Game> game)
      : _positionX(0), _positionY(0), _game(game)
    {
    }

    void GameActor::Move(MoveDirection direction)
    {
      switch (direction)
      {
      case MoveDirection::North:
        _positionY++;
        break;
      case MoveDirection::East:
        _positionX++;
        break;
      case MoveDirection::South:
        _positionY--;
        break;
      case MoveDirection::West:
        _positionX--;
        break;
      default:
        break;
      }
      std::cout << "You moved somewhere." << std::endl;
    }

    void GameActor::Explore() const
    {
      std::cout << "I am at position (" << _positionX << "," << _positionY << ")." << std::endl;
    }
  }
}