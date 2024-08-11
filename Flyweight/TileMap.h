#pragma once
#include <cstdint>
#include <cassert>

#include "TerrainTile.h"

namespace GameDev
{
  namespace Patterns
  {
    /// <summary>
    /// Класс мира.
    /// </summary>
    class World;

    /// <summary>
    /// Карта тайлов.
    /// </summary>
    class TileMap
    {
    public:
      /// <summary>
      /// Конструктор.
      /// </summary>
      /// <param name="world">Мир.</param>
      /// <param name="mapSize">Размер карты.</param>
      TileMap(const World& world, uint32_t mapSize);

      /// <summary>
      /// Деструктор.
      /// </summary>
      virtual ~TileMap();

      /// <summary>
      /// Возвращает плитку карты.
      /// </summary>
      /// <param name="row">Номер строки карты.</param>
      /// <param name="column">Номер колонки карты.</param>
      /// <returns>Плитка карты.</returns>
      const TerrainTile& GetTile(uint32_t row, uint32_t column) const
      {
        assert(row < _mapSize);
        assert(column < _mapSize);

        uint32_t tileIndex = row * _mapSize + column;
        return _mapTiles[tileIndex];
      }

    protected:
      /// <summary>
      /// Генерирует карту.
      /// </summary>
      /// <param name="world">Мир.</param>
      /// <param name="mapSize">Размер карты.</param>
      /// <returns>Плитки карты.</returns>
      static TerrainTile* GenerateMap(const World& world, uint32_t mapSize);

    private:
      /// <summary>
      /// Размер карты.
      /// </summary>
      uint32_t _mapSize;

      /// <summary>
      /// Плитки карты.
      /// </summary>
      TerrainTile* _mapTiles;
    };
  }
}