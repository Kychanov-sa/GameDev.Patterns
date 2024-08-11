#pragma once

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Тип поверхности.
    /// </summary>
    enum class TerrainType
    {
      /// <summary>
      /// Трава.
      /// </summary>
      Grass = 0,

      /// <summary>
      /// Вода.
      /// </summary>
      Water,

      /// <summary>
      /// Камни.
      /// </summary>
      Rocks,

      /// <summary>
      /// Лес.
      /// </summary>
      Forest,

      /// <summary>
      /// Песок.
      /// </summary>
      Sand
    };
  }
}

