#pragma once

#include <unordered_map>
#include "InputHandler.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Код клавиши клавиатуры.
    /// </summary>
    enum class KeyCode : int
    {
      Unknown = 0,
      W = 119,
      S = 115,
      A = 97,
      D = 100,
      Space = 32,
      Escape = 27,
    };

    /// <summary>
    /// Обработчик пользовательского ввода с клавиатуры.
    /// </summary>
    class KeyboardInputHandler : InputHandler
    {
    public:
      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~KeyboardInputHandler() {}

      /// <summary>
      /// Обрабатывает пользовательский ввод с клавиатуры.
      /// </summary>
      /// <returns>Команда, которую необходимо выполнить в соответствии с пользовательским вводом.</returns>
      virtual Command* HandleInput();

      /// <summary>
      /// Назначает команду на соответствующую клавишу клавиатуры.
      /// </summary>
      /// <param name="keyCode">Код клавиши.</param>
      /// <param name="command">Назначаемая команда.</param>
      void AssignCommand(KeyCode keyCode, Command* command);

    private:
      std::unordered_map<KeyCode, Command*> _commandsMap;
    };
  }
}