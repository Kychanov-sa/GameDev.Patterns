#include <conio.h>
#include <iostream>
#include "KeyboardInputHandler.h"

namespace GameDev
{
  namespace Patterns
  {
    Command* KeyboardInputHandler::HandleInput()
    {
      KeyCode key = KeyCode::Unknown;

      // Ожидаем нажатия клавиши
      while (!_kbhit())
      {
        key = (KeyCode) _getch();
        break;
      }
      
      auto command = _commandsMap.find(key);
      return command != _commandsMap.end() ?
        command->second : nullptr;
    }

    void KeyboardInputHandler::AssignCommand(KeyCode keyCode, Command* command)
    {
      _commandsMap[keyCode] = command;
    }
  }
}