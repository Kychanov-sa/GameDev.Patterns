// Flyweight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "World.h"

using namespace GameDev::Patterns;

int main()
{
  World world(32);

  std::cout << "Hello World!\n";
  world.GenerateTerrain();

  auto map = world.GetMap();
  for (uint32_t mapRow = 0; mapRow < world.GetWorldSize(); ++mapRow)
  {
    for (uint32_t mapColumn = 0; mapColumn < world.GetWorldSize(); ++mapColumn)
    {
      auto tile = map->GetTile(mapRow, mapColumn);
      switch (tile.GetTerrainType())
      {
      case TerrainType::Grass:
        std::cout << "/";
        break;
      case TerrainType::Water:
        std::cout << "~";
        break;
      case TerrainType::Rocks:
        std::cout << "#";
        break;
      case TerrainType::Sand:
        std::cout << ".";
        break;
      case TerrainType::Forest:
        std::cout << "^";
        break;
      }
    }

    std::cout << std::endl;
  }
}