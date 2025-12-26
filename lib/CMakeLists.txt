# lib/CMakeLists.txt

set(appmenuapplet_SRCS
    appmenuapplet.cpp
    decorationpalette.cpp
)

add_library(org.kde.windowappmenu MODULE ${appmenuapplet_SRCS})


target_link_libraries(org.kde.windowappmenu
    PUBLIC
        Qt6::Widgets
        Qt6::Quick
        Qt6::DBus
        KF6::ConfigWidgets
        KF6::WindowSystem
        Plasma::Plasma
        KDecoration3::KDecoration
)

install(TARGETS org.kde.windowappmenu DESTINATION ${KDE_INSTALL_PLUGINDIR}/plasma/applets)

install(FILES metadata.json DESTINATION ${KDE_INSTALL_DATADIR}/plasma/plasmoids/org.kde.windowappmenu)
