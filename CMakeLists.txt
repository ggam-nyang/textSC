cmake_minimum_required(VERSION 3.26)
project(TextSC)

set(CMAKE_CXX_STANDARD 20)

add_executable(TextSC main.cpp
        units/Unit.cpp
        units/Unit.h
        units/Marine.cpp
        units/Marine.h
        units/Firebat.cpp
        units/Firebat.h
        units/Damage/DamageType.h
        units/Defense/SizeType.h
        units/Damage/Damage.cpp
        units/Damage/Damage.h
        units/Defense/Defense.cpp
        units/Defense/Defense.h)
