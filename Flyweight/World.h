#pragma once

#include "TerrainTile.h"
#include "TileMap.h"

namespace GameDev
{
  namespace Patterns
  {
    class World
    {
    public:
      /// <summary>
      /// Конструктор.
      /// </summary>
      /// <param name="worldSize">Размер мира.</param>
      World(uint32_t worldSize);

      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~World();

      /// <summary>
      /// Генерирует карту мира.
      /// </summary>
      void GenerateTerrain();

      /// <summary>
      /// Возвращает размер мира.
      /// </summary>
      /// <returns>Размер мира в тайлах по ширине и высоте.</returns>
      const uint32_t GetWorldSize() const
      {
        return _worldSize;
      }

      /// <summary>
      /// Возвращает карту мира.
      /// </summary>
      /// <returns>Карта тайлов.</returns>
      const TileMap* GetMap() const
      {
        return _map;
      }

    public:
      /// <summary>
      /// Плитка ландшафта типа "трава".
      /// </summary>
      const TerrainTile GrassTile = TerrainTile(TerrainType::Grass);

      /// <summary>
      /// Плитка ландшафта типа "вода".
      /// </summary>
      const TerrainTile WaterTile = TerrainTile(TerrainType::Water);

      /// <summary>
      /// Плитка ландшафта типа "камни".
      /// </summary>
      const TerrainTile RockTile = TerrainTile(TerrainType::Rocks);

      /// <summary>
      /// Плитка ландшафта типа "лес".
      /// </summary>
      const TerrainTile ForestTile = TerrainTile(TerrainType::Forest);

      /// <summary>
      /// Плитка ландшафта типа "песок".
      /// </summary>
      const TerrainTile SandTile = TerrainTile(TerrainType::Sand);

    private:
      /// <summary>
      /// Размер мира.
      /// </summary>
      uint32_t _worldSize;

      /// <summary>
      /// Карта мира.
      /// </summary>
      TileMap* _map;
    };
  }
}