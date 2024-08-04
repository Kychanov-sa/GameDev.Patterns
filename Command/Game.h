#pragma once

#include <memory>
#include "GameState.h"
#include "GameActor.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Класс ингы.
    /// </summary>
    class Game
    {
    public:
      /// <summary>
      /// Конструктор.
      /// </summary>
      Game();

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
