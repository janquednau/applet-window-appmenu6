set(appmenuapplet_SRCS
    appmenumodel.cpp
    appmenuplugin.cpp
    commontools.cpp
    schemecolors.cpp
    schemesmodel.cpp
    wm/abstractwindowmanager.cpp
    wm/waylandwindowmanager.cpp
    wm/x11fallbackwindowmanager.cpp
)

add_library(appmenuplugin SHARED ${appmenuapplet_SRCS})

# Load dependencies
find_package(Qt6 CONFIG REQUIRED Widgets DBus Quick Core)
find_package(LibTaskManager REQUIRED)
find_package(Plasma REQUIRED)
find_package(PlasmaQuick REQUIRED)
cmake_policy(SET CMP0063 NEW)

add_subdirectory(libdbusmenuqt)

target_link_libraries(appmenuplugin
    PUBLIC
    Qt6::Core
    Qt6::Widgets
    Qt6::Quick
    Plasma::PlasmaQuick
    KF6::WindowSystem
    PW::LibTaskManager
    dbusmenuqt
)

if(HAVE_X11)
    find_package(XCB MODULE REQUIRED COMPONENTS XCB)
    set_package_properties(XCB PROPERTIES TYPE REQUIRED)
    target_link_libraries(appmenuplugin PRIVATE Qt6::Gui XCB::XCB)
endif()

install(TARGETS appmenuplugin DESTINATION ${KDE_INSTALL_QMLDIR}/org/kde/private/windowAppMenu)
install(FILES qmldir DESTINATION ${KDE_INSTALL_QMLDIR}/org/kde/private/windowAppMenu)
