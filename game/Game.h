//
// Created by ggam-nyang on 2/5/24.
//

#ifndef TEXTSC_GAME_GAME_H_
#define TEXTSC_GAME_GAME_H_

#include "../units/Unit.h"

class Game {
 public:
  void StartGame(Unit& unit1, Unit& unit2);
 private:
  int round_ = 1;
  void PlayRound(Unit& unit1, Unit& unit2);
  void PrintGameResult(Unit& unit1, const Unit& unit2) const;
};

#endif  //TEXTSC_GAME_GAME_H_
