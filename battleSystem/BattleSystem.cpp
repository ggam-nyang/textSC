//
// Created by ggam-nyang on 2/5/24.
//

#include "BattleSystem.h"

int BattleSystem::getDamageRatio(AttackType attackType,
                                 DefenseType defenseType) {
  switch (attackType) {
    case AttackType::kNormal:
      switch (defenseType) {
        case DefenseType::kNormal:
          return 100;
        case DefenseType::kArmored:
          return 80;
        default:
          throw std::invalid_argument("Invalid defense type");
      }

    case AttackType::kConcussive:
      switch (defenseType) {
        case DefenseType::kNormal:
          return 120;
        case DefenseType::kArmored:
          return 100;
        default:
          throw std::invalid_argument("Invalid defense type");
      }
  }
}

int BattleSystem::getDamage(Unit& attacker, Unit& defender) {
  int damage = attacker.atk_ *
               getDamageRatio(attacker.atk_type_, defender.def_type_) / 100;
  damage -= defender.def_;

  return damage >= 0 ? damage : 0;
}

void BattleSystem::attack(Unit& attacker, Unit& defender) {
  int damage = getDamage(attacker, defender);
  std::cout << attacker.name << "이 " << "damage: " << damage << "으로 공격합니다."<< std::endl;
  defender.current_hp_ -= damage;
  if (defender.current_hp_ < 0) {
    defender.current_hp_ = 0;
  }
}

BattleSystem* BattleSystem::GetInstance() {
  if (instance_ == nullptr) {
    instance_ = new BattleSystem();
  }

  return instance_;
}

BattleSystem* BattleSystem::instance_ = nullptr;
