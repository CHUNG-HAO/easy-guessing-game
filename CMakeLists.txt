cmake_minimum_required(VERSION 3.21)

project(easy-guessing-game)

# 添加Game和Player的源文件
add_library(Game Game.cpp)
add_library(Player Player.cpp)

# 設定main的源文件
add_executable(main main.cpp)

# 連結庫到main
target_link_libraries(main PRIVATE Game Player)
