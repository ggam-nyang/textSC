#include <iostream>
#include "units/Firebat.h"
#include "units/Marine.h"

void startGame();

int main() {
  //  startGame();
  DamageType damage_type1 = DamageType::NORMAL;
  DamageType damage_type2 = DamageType::NORMAL;

  if (damage_type1 == damage_type2) {
    std::cout << "same" << std::endl;
  } else {
    std::cout << "different" << std::endl;
  }

  return 0;
}

void startGame() {
  std::cout << "마린 vs 파이어뱃 게임을 시작했습니다." << std::endl;
  std::cout << "마린의 선공으로 라운드가 시작됩니다." << std::endl;

  auto marine = std::make_shared<Marine>();
  auto firebat = std::make_shared<Firebat>();

  while (marine->isAlive() && firebat->isAlive()) {
    marine->Attack(*firebat);
    firebat->Attack(*marine);
  }
}
