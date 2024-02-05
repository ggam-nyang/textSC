//
// Created by ggam-nyang on 2/5/24.
//

#ifndef TEXTSC_UNITS_BATTLESYSTEM_BATTLESYSTEM_H_
#define TEXTSC_UNITS_BATTLESYSTEM_BATTLESYSTEM_H_

#include "../units/Unit.h"

class BattleSystem {
 protected:
  BattleSystem() = default;
  static BattleSystem* instance_;

 public:
  BattleSystem(BattleSystem&) = delete;
  void operator=(const BattleSystem&) = delete;
  static BattleSystem* GetInstance();

  int getDamageRatio(AttackType attackType, DefenseType defenseType);
  int getDamage(Unit& attacker, Unit& defender);
  void attack(Unit& attacker, Unit& defender);
};

#endif  //TEXTSC_UNITS_BATTLESYSTEM_BATTLESYSTEM_H_
