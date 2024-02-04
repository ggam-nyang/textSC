#include "Unit.h"
//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNITS_FIREBAT_H_
#define TEXTSC_UNITS_FIREBAT_H_

class Firebat : public Unit {
 public:
  Firebat();
  ~Firebat() override = default;

  void Attack(Unit& target) override;
  bool isAlive() override;

  const int kFirebatMaxHp = 50;
  const int kFirebatDefense = 1;
  const int kFirebatDamage = 8;
};

#endif  //TEXTSC_UNITS_FIREBAT_H_
