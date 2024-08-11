#include "World.h"
namespace GameDev
{
  namespace Patterns
  {
    World::World(uint32_t worldSize)
      : _worldSize(worldSize), _map(nullptr)
    {
      
    }

    World::~World()
    {
      if (_map)
      {
        delete _map;
        _map = nullptr;
      }
    }

    void World::GenerateTerrain()
    {
      if (_map)
        delete _map;
      _map = new TileMap(*this, _worldSize);
    }
  }
}