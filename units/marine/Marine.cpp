//
// Created by ggam-nyang on 2/1/24.
//

#include "Marine.h"

Marine::Marine() {
  name = "Marine";
  max_hp_ = kMarineMaxHp;
  current_hp_ = kMarineMaxHp;
  atk_ = kMarineAtk;
  def_ = kMarineDef;
  atk_type_ = kMarineAtkType;
  def_type_ = kMarineDefType;
}