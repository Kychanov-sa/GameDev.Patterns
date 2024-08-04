#pragma once

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Игровые действия.
    /// </summary>
    enum class GameAction
    {
      /// <summary>
      /// Двигаться на север.
      /// </summary>
      MoveNorth = 0,

      /// <summary>
      /// Двигаться на восток.
      /// </summary>
      MoveEast,

      /// <summary>
      /// Двигаться на юг.
      /// </summary>
      MoveSouth,

      /// <summary>
      /// Двигаться на запад.
      /// </summary>
      MoveWest,

      /// <summary>
      /// Обследовать местность.
      /// </summary>
      Explore,

      /// <summary>
      /// Выйти из игры.
      /// </summary>
      QuitGame
    };
  }
}