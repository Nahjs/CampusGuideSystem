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
        addinform.cpp
        bjutmap.cpp
        frmmain.cpp
        inquiry.cpp
        main.cpp
        sendemailapi/emailaddress.cpp
        sendemailapi/mimeattachment.cpp
        sendemailapi/mimecontentformatter.cpp
        sendemailapi/mimefile.cpp
        sendemailapi/mimehtml.cpp
        sendemailapi/mimeinlinefile.cpp
        sendemailapi/mimemessage.cpp
        sendemailapi/mimemultipart.cpp
        sendemailapi/mimepart.cpp
        sendemailapi/mimetext.cpp
        sendemailapi/quotedprintable.cpp
        sendemailapi/smtpclient.cpp
        profession.cpp
        recommend.cpp

        Information.h
        addinform.h
        alldistancedata.h
        bjutmap.h
        frmmain.h
        inquiry.h
        introduction.h
        sendemailapi/emailaddress.h
        sendemailapi/mimeattachment.h
        sendemailapi/mimecontentformatter.h
        sendemailapi/mimefile.h
        sendemailapi/mimehtml.h
        sendemailapi/mimeinlinefile.h
        sendemailapi/mimemessage.h
        sendemailapi/mimemultipart.h
        sendemailapi/mimepart.h
        sendemailapi/mimetext.h
        sendemailapi/quotedprintable.h
        sendemailapi/smtpclient.h
        sendemailapi/smtpmime.h
        process.h
        profession.h
        recommend.h
        subject.h

        Information.ui
        addinform.ui
        bjutmap.ui
        frmmain.ui
        inquiry.ui
        profession.ui
        recommend.ui
)

# 链接Qt6库
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Quick)
