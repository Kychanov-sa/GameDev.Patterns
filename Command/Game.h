#pragma once

#include <memory>
#include "GameState.h"
#include "GameActor.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Класс игры.
    /// </summary>
    class Game : public std::enable_shared_from_this<Game>
    {
    public:
      /// <summary>
      /// Создаёт новую игру.
      /// </summary>
      /// <returns>Объект игры.</returns>
      static std::shared_ptr<Game> Create();

      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~Game() { }

      /// <summary>
      /// Начинает игру.
      /// </summary>
      void Start();

      /// <summary>
      /// Завершает игру.
      /// </summary>
      void Finish();

      /// <summary>
      /// Возвращает актор игрока.
      /// </summary>
      /// <returns>Объект актор.</returns>
      std::shared_ptr<GameActor> GetPlayer()
      {
        return _player;
      }

      /// <summary>
      /// Возвращает состояние игры.
      /// </summary>
      /// <returns>Состояние игры.</returns>
      GameState GetState() const
      {
        return _state;
      }

    private:
      /// <summary>
      /// Конструктор.
      /// </summary>
      Game()
        : _state(GameState::Initializing)
      {
      }

    private:
      /// <summary>
      /// Состояние игры.
      /// </summary>
      GameState _state;

      /// <summary>
      /// Игрок.
      /// </summary>
      std::shared_ptr<GameActor> _player;
    };
  }
}
