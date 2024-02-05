cmake_minimum_required(VERSION 3.26)
project(TextSC)

set(CMAKE_CXX_STANDARD 20)

add_executable(TextSC main.cpp
        battleSystem/BattleSystem.cpp
        battleSystem/BattleSystem.h
        units/Unit.cpp
        units/Unit.h
        units/marine/Marine.cpp
        units/marine/Marine.h
        units/firebat/Firebat.cpp
        units/firebat/Firebat.h
        units/AttackType.h
        units/DefenseType.h
        game/Game.cpp
        game/Game.h)
