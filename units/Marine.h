#include <iostream>
#include "Unit.h"
//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNITS_MARINE_H_
#define TEXTSC_UNITS_MARINE_H_

class Marine : public Unit {
 public:
  Marine() { max_hp_ = }

  ~Marine() override = default;

  void Attack(Unit& target) override{

  };

 public:
 private:
  const int kMarineMaxHp = 40;
  const int kMarineDefense = 0;
  const int kMarineDamage = 6;
  const int kMarineAttackSpeed = 1;
};

#endif  //TEXTSC_UNITS_MARINE_H_
