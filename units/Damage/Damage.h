#include "DamageType.h"
#include <map>
#include <typeindex>

//
// Created by ggam-nyang on 2/4/24.
//

#ifndef TEXTSC_UNITS_DAMAGE_H_
#define TEXTSC_UNITS_DAMAGE_H_

class Damage {
 public:
  Damage(int value, DamageType damage_type);
  int GetDamage() const;
  DamageType GetDamageType() const;

 private:
  int value_;
  DamageType damage_type_;
  static const std::map<std::type_index, Damage> kDamageMap
};

#endif  //TEXTSC_UNITS_DAMAGE_H_
