//
// Created by ggam-nyang on 2/1/24.
//

#include "Unit.h"
#include "../battleSystem/BattleSystem.h"

void Unit::Attack(Unit& target) {
  if (!target.IsAlive())
    return;

  BattleSystem* battle_system = BattleSystem::GetInstance();
  battle_system->attack(*this, target);
  target.PrintCurrentHp();
}

bool Unit::IsAlive() {
  return current_hp_ > 0;
}

void Unit::PrintStatus() {
  std::cout << "Name: " << name << std::endl;
  std::cout << "HP: " << current_hp_ << "/" << max_hp_ << std::endl;
  std::cout << "ATK: " << atk_ << std::endl;
  std::cout << "DEF: " << def_ << std::endl;
}

void Unit::PrintCurrentHp() {
  std::cout << name << " HP: " << current_hp_ << "/" << max_hp_ << std::endl;
}