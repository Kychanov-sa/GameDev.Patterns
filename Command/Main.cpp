#include <conio.h>
#include <iostream>
#include "Game.h"
#include "GameActor.h"
#include "CommandFactory.h"
#include "KeyboardInputHandler.h"

using namespace GameDev::Patterns;

int main()
{
  Game game;
  KeyboardInputHandler keyboardHandler;

  // Привязка клавиш управления
  keyboardHandler.AssignCommand(KeyCode::W, CommandFactory::CreateCommand(GameAction::MoveNorth));
  keyboardHandler.AssignCommand(KeyCode::S, CommandFactory::CreateCommand(GameAction::MoveSouth));
  keyboardHandler.AssignCommand(KeyCode::D, CommandFactory::CreateCommand(GameAction::MoveEast));
  keyboardHandler.AssignCommand(KeyCode::A, CommandFactory::CreateCommand(GameAction::MoveWest));
  keyboardHandler.AssignCommand(KeyCode::Space, CommandFactory::CreateCommand(GameAction::Explore));
  keyboardHandler.AssignCommand(KeyCode::Escape, CommandFactory::CreateCommand(GameAction::QuitGame));

  game.Start();
  do
  {
    auto command = keyboardHandler.HandleInput();
    if (command != nullptr)
    {
      command->Execute(game.GetPlayer());
    }
  } while (game.GetState() == GameState::Running);
  
  std::cout << "Game over" << std::endl;
}
