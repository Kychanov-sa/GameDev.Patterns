#pragma once

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Одиночка (Singleton) - гарантирует, что у класса есть только один экземпляр,
    /// и предоставляет к нему глобальную точку доступа.
    /// </summary>
    /// <typeparam name="T">Тип класса одиночки.</typeparam>
    template<typename T> class Singleton
    {      
    public:
      /// <summary>
      /// Возвращает экземпляр класса.
      /// </summary>
      /// <returns>Ссылка на экземпляр класса.</returns>
      static T& GetInstance()
      {
        static T* instance = new T();
        return *instance;
      }

    protected:
      /// <summary>
      /// Конструктор.
      /// </summary>
      Singleton() = default;

      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~Singleton() = default;
    };    
  }
}