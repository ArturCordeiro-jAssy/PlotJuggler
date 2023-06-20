
include_directories( ../ )

add_definitions(${QT_DEFINITIONS})
add_definitions(-DQT_PLUGIN)

QT5_WRAP_UI ( UI_SRC
    asciireadersettings.ui
    binarystreamreadersettings.ui
    dataformatpanel.ui
    endiannessbox.ui
    framedreadersettings.ui
    numberformatbox.ui
    )

add_library(ParserRaw SHARED
    abstractreader.cpp
    asciireader.cpp
    asciireadersettings.cpp
    binarystreamreader.cpp
    binarystreamreadersettings.cpp
    dataformatpanel.cpp
    endiannessbox.cpp
    framedreader.cpp
    framedreadersettings.cpp
    numberformat.cpp
    numberformatbox.cpp
    ${UI_SRC}  )

target_link_libraries(ParserRaw
    ${Qt5Widgets_LIBRARIES}
    ${Qt5Xml_LIBRARIES}
    plotjuggler_base
    plotjuggler_qwt)

    install(TARGETS ParserRaw DESTINATION ${PJ_PLUGIN_INSTALL_DIRECTORY}  )
