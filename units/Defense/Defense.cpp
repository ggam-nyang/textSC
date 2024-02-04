//
// Created by ggam-nyang on 2/4/24.
//

#include "Defense.h"

Defense::Defense(int value, SizeType size_type) {
  value_ = value;
  size_type_ = size_type;
}

int Defense::GetDefense() const {
  return value_;
}

SizeType Defense::GetSizeType() const {
  return size_type_;
}
