#pragma once

#include "MoveDirection.h"
#include "Command.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Команда перемещения.
    /// </summary>
    class MoveCommand : public Command
    {
    public:
      /// <summary>
      /// Конструктор.
      /// </summary>
      /// <param name="direction">Направление перемещения.</param>
      MoveCommand(MoveDirection direction);

      /// <summary>
      /// Выполняет перемещение актора.
      /// </summary>
      /// <param name="actor">Перемещаемый актор.</param>
      virtual void Execute(std::shared_ptr<GameActor> actor);

      /// <summary>
      /// Отменяет перемещение актора.
      /// </summary>
      /// <param name="actor">Перемещаемый актор.</param>
      virtual void Undo(std::shared_ptr<GameActor> actor);

    private:
      /// <summary>
      /// Возвращает обратное перемещению направление.
      /// </summary>
      /// <returns>Обратное направление.ы</returns>
      MoveDirection GetOppositeDirection() const;

    protected:
      /// <summary>
      /// Направление перемещения.
      /// </summary>
      MoveDirection _direction;
    };
  }
}


