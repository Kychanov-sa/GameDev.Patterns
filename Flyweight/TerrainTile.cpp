#include "TerrainTile.h"

namespace GameDev
{
  namespace Patterns
  {
    int TerrainTile::CalculateMoveCost() const
    {
      switch (_terrainType)
      {
      case GameDev::Patterns::TerrainType::Grass:
        return 1;
      case GameDev::Patterns::TerrainType::Water:
        return -1;
      case GameDev::Patterns::TerrainType::Rocks:
        return 10;
      case GameDev::Patterns::TerrainType::Forest:
        return 5;
      case GameDev::Patterns::TerrainType::Sand:
        return 3;
      default:
        return 0;
      }
    }
  }
}
