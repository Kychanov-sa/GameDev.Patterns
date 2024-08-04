#pragma once

#include "GameAction.h"
#include "Command.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Фабрика команд.
    /// </summary>
    class CommandFactory
    {
    public:
      /// <summary>
      /// Создаёт команду для игрового действия.
      /// </summary>
      /// <param name="action">Игровое действие.</param>
      /// <returns>Команда.</returns>
      static Command* CreateCommand(GameAction action);
    };
  }
}
