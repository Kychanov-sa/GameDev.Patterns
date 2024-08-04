#include "Game.h"
#include "GameActor.h"

namespace GameDev
{
  namespace Patterns
  {
    Game::Game()
      : _state(GameState::Initializing)
    {
      auto me = std::make_shared<Game>(*this);
      _player = std::make_shared<GameActor>(GameActor(me));
    }

    void Game::Start()
    {
      _state = GameState::Running;
    }

    void Game::Finish()
    {
      _state = GameState::Finished;
    }
  }
}