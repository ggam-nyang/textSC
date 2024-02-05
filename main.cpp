#include <iostream>
#include "units/firebat/Firebat.h"
#include "units/marine/Marine.h"
#include "game/Game.h"

using namespace std;

int main() {
  auto game = Game();
  std::shared_ptr<Unit> marine = std::make_shared<Marine>();
  std::shared_ptr<Unit> firebat = std::make_shared<Firebat>();

  game.StartGame(*marine, *firebat);

  return 0;
}
