#pragma once

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Состояние игры.
    /// </summary>
    enum class GameState
    {
      /// <summary>
      /// Инициализация.
      /// </summary>
      Initializing = 0,

      /// <summary>
      /// В работе.
      /// </summary>
      Running,

      /// <summary>
      /// Завершена.
      /// </summary>
      Finished
    };
  }
}
