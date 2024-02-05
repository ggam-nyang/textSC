#include "../Unit.h"
//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNITS_FIREBAT_H_
#define TEXTSC_UNITS_FIREBAT_H_

class Firebat : public Unit {
 public:
  Firebat();
  ~Firebat() override = default;

  static const int kFirebatMaxHp = 50;
  static const int kFirebatAtk = 8;
  static const int kFirebatDef = 1;
  static const AttackType kFirebatAtkType = AttackType::kConcussive;
  static const DefenseType kFirebatDefType = DefenseType::kArmored;
};

#endif  //TEXTSC_UNITS_FIREBAT_H_
