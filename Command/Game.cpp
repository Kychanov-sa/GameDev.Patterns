#include "Game.h"
#include "GameActor.h"

namespace GameDev
{
  namespace Patterns
  {
    std::shared_ptr<Game> Game::Create()
    {
      return std::shared_ptr<Game>(new Game());
    }

    void Game::Start()
    {
      _player = std::make_shared<GameActor>(shared_from_this());
      _state = GameState::Running;
    }

    void Game::Finish()
    {
      _state = GameState::Finished;
      _player = nullptr;
    }
  }
}