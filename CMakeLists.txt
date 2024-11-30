cmake_minimum_required(VERSION 3.16)

project(Application LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Gui Widgets Multimedia)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Gui Widgets Multimedia)

add_executable(Application
  src/main.cpp
  src/application.cpp
  src/application.h
  src/ui/text_area.cpp
  src/ui/text_area.h
  src/ui/buttons.cpp
  src/ui/buttons.h
  src/MainForm.ui
)
target_link_libraries(Application Qt${QT_VERSION_MAJOR}::Core
                                  Qt${QT_VERSION_MAJOR}::Gui
                                  Qt${QT_VERSION_MAJOR}::Widgets
                                  Qt${QT_VERSION_MAJOR}::Multimedia)

include(GNUInstallDirs)
install(TARGETS Application
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
