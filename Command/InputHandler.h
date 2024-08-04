#pragma once

#include <unordered_map>
#include "Command.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Обработчик пользовательского ввода.
    /// </summary>
    class InputHandler
    {
    public:
      /// <summary>
      /// Обрабатывает пользовательский ввод.
      /// </summary>
      /// <returns>Команда, которую необходимо выполнить в соответствии с пользовательским вводом.</returns>
      virtual Command* HandleInput() = 0;
    };
  }
}