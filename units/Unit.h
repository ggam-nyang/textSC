#include <iostream>
#include <string>
#include "AttackType.h"
#include "DefenseType.h"

//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNIT_H
#define TEXTSC_UNIT_H

class Unit {
 protected:
  Unit() = default;

 public:
  virtual ~Unit() = default;
  virtual void Attack(Unit& target);
  virtual bool IsAlive();
  virtual void PrintStatus();
  virtual void PrintCurrentHp();

  std::string name;
  int max_hp_;
  int current_hp_;
  int atk_;
  int def_;
  AttackType atk_type_;
  DefenseType def_type_;

  // not use for textSC
  // attack_range
  // attack_target_type
  // attack_speed
};

#endif  //TEXTSC_UNIT_H
