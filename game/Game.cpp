//
// Created by ggam-nyang on 2/5/24.
//

#include "Game.h"
#include <iostream>

void Game::StartGame(Unit& unit1, Unit& unit2) {
  std::cout << unit1.name << " VS " << unit2.name << " 게임을 시작했습니다."
            << std::endl;
  std::cout << "각 유닛의 스탯입니다." << std::endl;

  unit1.PrintStatus();
  unit2.PrintStatus();

  std::cout << unit1.name << "의 선공으로 라운드가 시작됩니다." << std::endl;
  while (unit1.IsAlive() && unit2.IsAlive()) {
    PlayRound(unit1, unit2);
  }

  PrintGameResult(unit1, unit2);
}

void Game::PrintGameResult(Unit& unit1, const Unit& unit2) const {
  if (unit1.IsAlive()) {
    std::cout << unit1.name << "이(가) 승리했습니다." << std::endl;
  } else {
    std::cout << unit2.name << "이(가) 승리했습니다." << std::endl;
  }
}

void Game::PlayRound(Unit& unit1, Unit& unit2) {
  std::cout << "라운드 " << round_++ << "입니다." << std::endl;
  unit1.Attack(unit2);
  unit2.Attack(unit1);
}
