cmake_minimum_required(VERSION 3.29)

# 设置项目名称
project(BJTU_Guide)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 查找Qt6模块
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Quick)

# 添加可执行文件
add_executable(${PROJECT_NAME}
        Information.cpp
        Choose.cpp
        bjtuMap.cpp
        main.cpp

        Information.h
        Choose.cpp
        distanceData.h
        bjtuMap.h
        introduction.h
        process.h
        subject.h

        Information.ui
        Choose.ui
        bjtuMap.ui
)

# 链接Qt6库
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Quick)
