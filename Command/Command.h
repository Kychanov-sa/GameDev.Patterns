#pragma once

#include <memory>
#include "GameActor.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Команда (Command) - реифицированный (reified) вызов метода.
    /// </summary>
    /// <remarks>Команда инкапсулирует запрос как объект, позволяя тем самым задавать параметры
    /// клиентов для обработки соответствующих запросов, ставить запросы в очередь или протоколировать их,
    /// а также поддерживать отмену операции.</remarks>
    class Command
    {
    public:
      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~Command() { }

      /// <summary>
      /// Выполняет команду для переданного актора.
      /// </summary>
      
      /// <param name="actor">Актор для выполнения команды.</param>
      virtual void Execute(std::shared_ptr<GameActor> actor) = 0;

      /// <summary>
      /// Отменяет выполнение команды.
      /// </summary>
      /// <param name="actor">Актор для отмены выполнения команды.</param>
      virtual void Undo(std::shared_ptr<GameActor> actor) = 0;
    };
  }
}

