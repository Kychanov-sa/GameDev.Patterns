#include "TileMap.h"
#include "World.h"
#include <random>

namespace GameDev
{
  namespace Patterns
  {
    TileMap::TileMap(const World& world, uint32_t mapSize)
      : _mapSize(mapSize)
    {
      _mapTiles = GenerateMap(world, mapSize);
    }

    TileMap::~TileMap()
    {
      delete[] _mapTiles;
    }

    TerrainTile* TileMap::GenerateMap(const World& world, uint32_t mapSize)
    {
      std::random_device rd;
      std::mt19937 generateRandom(rd());

      auto map = new TerrainTile[mapSize * mapSize];

      for (uint32_t row = 0; row < mapSize; ++row)
      {
        for (uint32_t column  = 0; column < mapSize; ++column)
        {
          uint32_t tileIndex = row * mapSize + column;
          map[tileIndex] = world.GrassTile;

          if (generateRandom() % 10 == 0)
          {
            map[tileIndex] = world.RockTile;
          }
          else if (generateRandom() % 5 == 0)
          {
            map[tileIndex] = world.ForestTile;
          }
          else
          {
            map[tileIndex] = world.GrassTile;
          }
        }
      }

      int riverRow = generateRandom() % mapSize;
      for (uint32_t riverColumn = 0; riverColumn < mapSize; ++riverColumn)
      {
        uint32_t riverIndex = riverRow * mapSize + riverColumn;
        map[riverIndex] = world.WaterTile;
      }

      if (riverRow > 0)
      {
        for (uint32_t sandColumn = 0; sandColumn < mapSize; ++sandColumn)
        {
          uint32_t sandIndex = (riverRow - 1) * mapSize + sandColumn;
          map[sandIndex] = world.SandTile;
        }
      }

      if (riverRow < (mapSize - 1))
      {
        for (uint32_t sandColumn = 0; sandColumn < mapSize; ++sandColumn)
        {
          uint32_t sandIndex = (riverRow + 1) * mapSize + sandColumn;
          map[sandIndex] = world.SandTile;
        }
      }

      return map;
    }
  }
}
