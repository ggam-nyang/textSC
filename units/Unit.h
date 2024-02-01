#include <iostream>
#include <string>
//
// Created by ggam-nyang on 2/1/24.
//

#ifndef TEXTSC_UNIT_H
#define TEXTSC_UNIT_H

class Unit {
 public:
  virtual ~Unit() = default;
  virtual void Attack(Unit& target) = 0;

 public:
  std::string name;

  int max_hp_;
  int current_hp_;
  int defense_;

  int damage_;
  int attack_speed_;
  int damage_type;  // FIXME: enum class

  int size_type_;  // FIXME: enum class

  // not use for textSC
  // attack_range
  // attack_target_type
  //
};

#endif  //TEXTSC_UNIT_H
