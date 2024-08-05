#pragma once

#include "Command.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Команда обзора.
    /// </summary>
    class ExploreCommand : public Command
    {
    public:
      /// <summary>
      /// Выполняет обзор для актора.
      /// </summary>
      /// <param name="actor">Актор, выполняющий обзор.</param>
      virtual void Execute(std::shared_ptr<GameActor> actor) override;

      /// <summary>
      /// Отменяет выполнение обзора.
      /// </summary>
      /// <param name="actor">Актор, выполняющий обзор.</param>
      virtual void Undo(std::shared_ptr<GameActor> actor) override { }
    };
  }
}


