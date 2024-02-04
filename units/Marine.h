#include <iostream>
#include "Unit.h"
//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNITS_MARINE_H_
#define TEXTSC_UNITS_MARINE_H_

class Marine : public Unit {
 public:
  Marine();
  ~Marine() override = default;
  void Attack(Unit& target) override;
  bool isAlive() override;

  static const int kMarineMaxHp = 40;
  static const int kMarineDamage = 6;
  static const int kMarineDefense = 0;
};

#endif  //TEXTSC_UNITS_MARINE_H_
