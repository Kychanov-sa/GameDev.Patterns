#pragma once

#include "Singleton.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Основной класс программы.
    /// </summary>
    class Program : public Singleton<Program>
    {
      friend Singleton<Program>;

    public:
      /// <summary>
      /// Главная функция программы.
      /// </summary>
      /// <returns></returns>
      void Main();

    protected:
      /// <summary>
      /// Конструктор.
      /// </summary>
      Program():
        ExitCode(0)
      {
      }

    public:
      /// <summary>
      /// Код выхода.
      /// </summary>
      int ExitCode;
    };
  }
}