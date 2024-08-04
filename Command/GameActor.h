#pragma once

#include <memory>
#include "MoveDirection.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Предварительное объявление.
    /// </summary>
    class Game;

    /// <summary>
    /// Игровой персонаж.
    /// </summary>
    class GameActor
    {
    public:
      /// <summary>
      /// Конструктор.
      /// </summary>
      /// <param name="game">Игра, которой принадлежит актор.</param>
      GameActor(std::shared_ptr<Game> game);

      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~GameActor() = default;

      /// <summary>
      /// Переместить.
      /// </summary>
      /// <param name="direction">Направление перемещения.</param>
      void Move(MoveDirection direction);

      /// <summary>
      /// Изучить.
      /// </summary>
      void Explore() const;

      /// <summary>
      /// Возвращает игру, в которой создан актор.
      /// </summary>
      /// <returns>Игра.</returns>
      std::shared_ptr<Game> GetGame()
      {
        return _game.lock();
      }

    protected:
      std::weak_ptr<Game> _game;

      /// <summary>
      /// Положение актора по оси X.
      /// </summary>
      int _positionX;

      /// <summary>
      /// Положение актора по оси Y.
      /// </summary>
      int _positionY;
    };
  }
}