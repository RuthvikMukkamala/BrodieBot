cmake_minimum_required(VERSION 3.28)
project(HFT_Sports_Betting)

set(CMAKE_CXX_STANDARD 26)

add_executable(HFT_Sports_Betting src/main.cpp
        BrodieBotCore/structures/Team/Player/Player.cpp
        BrodieBotCore/structures/Team/Player/Player.h)
