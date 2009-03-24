TEMPLATE = lib
include(../variables.pri)
TARGET = Plugin-$$TULIP_VERSION
QT += core \
    gui \
    script
    
SOURCES += Plugin.cpp

LIBS += -L$$TULIP_PATH/lib
LIBS += -L$$QTDIR_VAR/lib
LIBS += -L$$ENGINE_PATH
LIBS += -ltulip -ltulip-script -ltulip-qt4

LIBS += -L$$QTSCRIPT_GENERATOR_PATH/plugins/static
LIBS += -lqtscript_gui
LIBS += -lqtscript_core 
LIBS += -L$$SCRIPT_PATH
LIBS += -lqtscript_tulip_script 
LIBS += -fPIC -DPIC -shared 

INCLUDEPATH += $$ENGINE_PATH
