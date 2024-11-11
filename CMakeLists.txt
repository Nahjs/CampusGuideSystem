cmake_minimum_required(VERSION 3.5)

# 设置项目名称
project(CampusGuide_DP_QT)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
# 查找Qt6模块
find_package(Qt6 COMPONENTS Core Gui Widgets Quick REQUIRED)


# 添加可执行文件
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS}
        Information.cpp
        Choose.cpp
        Map.cpp
        Inquiry.cpp
        main.cpp

        Information.h
        Choose.cpp
        distanceData.h
        Map.h
        Inquiry.h
        introduction.h
        process.h
        subject.h

        Information.ui
        Choose.ui
        Map.ui
        Inquiry.ui
)

# 链接Qt6库
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Quick)
