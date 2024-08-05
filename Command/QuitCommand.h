#pragma once

#include "Command.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Команда выхода из игры.
    /// </summary>
    class QuitCommand : public Command
    {
    public:
      /// <summary>
      /// Выполняет выход из игры.
      /// </summary>
      /// <param name="actor">Актор, выполняющий выход.</param>
      virtual void Execute(std::shared_ptr<GameActor> actor) override;

      /// <summary>
      /// Отменяет выход из игры обзора.
      /// </summary>
      /// <param name="actor">Актор, выполняющий отмену выхода.</param>
      virtual void Undo(std::shared_ptr<GameActor> actor) override { }
    };
  }
}


