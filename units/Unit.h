#include <iostream>
#include <string>
#include "Damage/Damage.h"
#include "Defense/Defense.h"

//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNIT_H
#define TEXTSC_UNIT_H

class Unit {
 public:
  virtual ~Unit() = default;
  virtual void Attack(Unit& target) = 0;
  virtual bool isAlive() = 0;

  std::string name;
  int max_hp_;
  int current_hp_;
  std::shared_ptr<Damage> damage_;
  std::shared_ptr<Defense> defense_;

  // not use for textSC
  // attack_range
  // attack_target_type
  // attack_speed
};

#endif  //TEXTSC_UNIT_H
