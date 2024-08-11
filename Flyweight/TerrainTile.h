#pragma once

#include "TerrainType.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Тайл ландшафта.
    /// </summary>
    class TerrainTile
    {
    public:
      /// <summary>
      /// Конструктор.
      /// </summary>
      TerrainTile()
        : _terrainType(TerrainType::Grass)
      {
      }

      /// <summary>
      /// Конструктор.
      /// </summary>
      /// <param name="terrainType">Тип поверхности.</param>
      TerrainTile(TerrainType terrainType)
        : _terrainType(terrainType)
      {
      }

      /// <summary>
      /// Возвращает тип поверхности тайла.
      /// </summary>
      /// <returns>Тип поверхности.</returns>
      TerrainType GetTerrainType() const
      {
        return _terrainType;
      }

      /// <summary>
      /// Рассчитывает стоимость передвижения через тайл.
      /// </summary>
      /// <returns>Стоимость перемещения.</returns>
      int CalculateMoveCost() const;

    private:
      /// <summary>
      /// Тип поверхности.
      /// </summary>
      TerrainType _terrainType;
    };
  }
}
