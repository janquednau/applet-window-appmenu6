cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(applet_window_appmenu)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(VERSION 0.9.0)
set(AUTHOR "Michail Vourlakos")
set(EMAIL "mvourlakos@gmail.com")

set(QT_MIN_VERSION "6.9.0")
set(KF6_MIN_VERSION "6.5.0")

set(KF6_LOCALE_PREFIX "")

find_package(ECM ${KF6_MIN_VERSION} REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings)
include(ECMQtDeclareLoggingCategory)

find_package(Qt6 ${QT_MIN_VERSION} CONFIG REQUIRED COMPONENTS
    Quick
    Widgets
    DBus
    Gui
    Qml
    QuickControls2
)

find_package(KF6 ${KF6_MIN_VERSION} REQUIRED COMPONENTS
    WindowSystem
    ConfigWidgets
    CoreAddons
    I18n
    ItemModels
)

# Plasma and Workspace Dependencies
find_package(Plasma ${KF6_MIN_VERSION} REQUIRED)
find_package(LibTaskManager REQUIRED)
find_package(KDecoration3 REQUIRED)

# Load X11 libraries (Optional for Wayland-first systems)
find_package(X11)
set_package_properties(X11 PROPERTIES DESCRIPTION "X11 libraries"
                        URL "http://www.x.org"
                        TYPE OPTIONAL
                        PURPOSE "Required for building the X11 based workspace")

if(X11_FOUND)
  set(HAVE_X11 ON)
  find_package(XCB MODULE REQUIRED COMPONENTS XCB RANDR)
  set_package_properties(XCB PROPERTIES TYPE OPTIONAL)

  find_package(Qt6 ${QT_MIN_VERSION} CONFIG REQUIRED COMPONENTS Gui)
  add_definitions(-DHAVE_X11)
endif()

message(STATUS "KF6 VERSION : ${KF6_VERSION}")

configure_file(config-appmenu.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/plugin/config-appmenu.h)
configure_file(config-appmenu.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/lib/config-appmenu.h)

add_subdirectory(lib)
add_subdirectory(plugin)

# Installs the QML package
kpackage_install_package(package org.kde.windowappmenu kpackage/applet)
