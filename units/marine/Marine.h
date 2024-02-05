#include <iostream>
#include "../Unit.h"
//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNITS_MARINE_H_
#define TEXTSC_UNITS_MARINE_H_

class Marine : public Unit {
 public:
  Marine();
  ~Marine() override = default;

  static const int kMarineMaxHp = 40;
  static const int kMarineAtk = 6;
  static const int kMarineDef = 0;
  static const AttackType kMarineAtkType = AttackType::kNormal;
  static const DefenseType kMarineDefType = DefenseType::kNormal;
};

#endif  //TEXTSC_UNITS_MARINE_H_
