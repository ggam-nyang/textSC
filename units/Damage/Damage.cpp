//
// Created by ggam-nyang on 2/4/24.
//

#include "Damage.h"
#include "../Marine.h"
#include "../Firebat.h"

Damage::Damage(int damage, DamageType damage_type) {
  value_ = damage;
  damage_type_ = damage_type;
}

int Damage::GetDamage() const {
  return value_;
}

const std::map<std::type_index, Damage> Damage::kDamageMap = {
    {std::type_index(typeid(Marine)), Damage(Marine::kMarineDamage, )},
    {std::type_index(typeid(Firebat)), Damage(Marine::kMarineDamage, DamageType::NORMAL)},
};
