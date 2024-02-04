//
// Created by ggam-nyang on 2/1/24.
//

#include "Marine.h"
#include "Damage/Damage.h"

Marine::Marine() {
  max_hp_ = kMarineMaxHp;
  current_hp_ = kMarineMaxHp;
  damage_ = std::make_shared<Damage>(40, DamageType::NORMAL);
  defense_ = std::make_shared<Defense>(0, SizeType::SMALL);
}

void Marine::Attack(Unit& target) {

}

bool Marine::isAlive() {
  return current_hp_ <= 0;
}
