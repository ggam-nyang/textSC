#include "SizeType.h"
//
// Created by ggam-nyang on 2/4/24.
//

#ifndef TEXTSC_UNITS_DEFENSE_H_
#define TEXTSC_UNITS_DEFENSE_H_

class Defense {
 public:
  Defense(int value, SizeType size_type);
  int GetDefense() const;
  SizeType GetSizeType() const;

 private:
  int value_;
  SizeType size_type_;
};

#endif  //TEXTSC_UNITS_DEFENSE_H_
