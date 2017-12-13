TEMPLATE = app
TARGET = CirconscriptionGUI
QT += core \
    gui
HEADERS += desinscrirepersonne.h \
    electeurinterface.h \
    candidatinterface.h \
    circonscriptiongui.h
SOURCES += candidatinterface.cpp \
    circonscriptiongui.cpp \
    desinscrirepersonne.cpp \
    electeurinterface.cpp \
    main.cpp \
    desinscrirepersonne.cpp \
    electeurinterface.cpp \
    candidatinterface.cpp \
    main.cpp \
    circonscriptiongui.cpp
FORMS += desinscrirepersonne.ui \
    electeurinterface.ui \
    candidatinterface.ui \
    candidatinterface.ui \
    circonscriptiongui.ui
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."
