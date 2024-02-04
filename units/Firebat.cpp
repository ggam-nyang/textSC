#include "Firebat.h"
//
// Created by ggam-nyang on 2/1/24.
//

Firebat::Firebat() {
  max_hp_ = kFirebatMaxHp;
  current_hp_ = kFirebatMaxHp;
  damage_ = std::make_shared<Damage>(50, DamageType::CONCUSSIVE);
  defense_ = std::make_shared<Defense>(1, SizeType::SMALL);
}

void Firebat::Attack(Unit& target) {}

bool Firebat::isAlive() {
  return current_hp_ <= 0;
}
