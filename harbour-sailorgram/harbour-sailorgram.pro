# NOTICE:
#
# Application name defined in TARGET has a corresponding QML filename.
# If name defined in TARGET is changed, the following needs to be done
# to match new name:
#   - corresponding QML filename must be changed
#   - desktop icon filename must be changed
#   - desktop filename must be changed
#   - icon definition filename in desktop file must be changed
#   - translation filenames have to be changed

# The name of your application
TARGET = harbour-sailorgram

include($$PWD/../config.pri)

CONFIG += sailfishapp
QT     += sql dbus multimedia

LIBS += -L$$LIBQTELEGRAM_LIB_DIR -lQTelegram
INCLUDEPATH += $$LIBQTELEGRAM_INCLUDE_PATH

# WebP Plugin
webp.files = $$OUT_PWD/../webp-plugin/plugins/imageformats/*.so
webp.path  = /usr/share/$$TARGET/lib/imageformats
INSTALLS += webp

# Telegram Public Key
server_pub.files = $$PWD/server.pub
server_pub.path  = /usr/share/$$TARGET
INSTALLS    += server_pub
OTHER_FILES += $$server_pub.files

# Emoji Set
emoji.files = $$PWD/res/emoji/*.png
emoji.path  = /usr/share/$$TARGET/emoji
INSTALLS += emoji

# Lipstick Config
lipstick_config.files = $$PWD/lipstick/*.conf
lipstick_config.path  = /usr/share/lipstick/notificationcategories
INSTALLS    += lipstick_config
OTHER_FILES += $$lipstick_config.files

# DBus Config
dbus_config.files = $$PWD/dbus/*.service
dbus_config.path  = /usr/share/dbus-1/services
INSTALLS    += dbus_config
OTHER_FILES += $$dbus_config.files

# Systemd Config
systemd.files = $$PWD/systemd/*.service
systemd.path  = /usr/lib/systemd/user
INSTALLS    += systemd
OTHER_FILES += $$systemd.files

# Events Config
events.files = $$PWD/events/*.ini
events.path  = /usr/share/ngfd/events.d
INSTALLS    += events
OTHER_FILES += $$events.files

# MCE Config
mce.files = $$PWD/mce/*.ini
mce.path  = /etc/mce
INSTALLS    += mce
OTHER_FILES += $$mce.files

# Headers
HEADERS += \
    src/sailorgram.h \
    src/dbus/screenblank.h \
    src/dbus/interface/sailorgramadaptor.h \
    src/dbus/interface/sailorgraminterface.h \
    src/dbus/notification/notification.h \
    src/dbus/notification/notificationmanagerproxy.h \
    src/selector/audiorecorder.h \
    src/selector/thumbnailprovider.h \
    src/selector/exif/exif.h \
    src/selector/filesmodel.h \
    src/selector/filesmodelworker.h \
    src/item/translationinfoitem.h \

# Sources
SOURCES += \
    src/harbour-sailorgram.cpp \
    src/sailorgram.cpp \
    src/dbus/screenblank.cpp \
    src/dbus/interface/sailorgramadaptor.cpp \
    src/dbus/interface/sailorgraminterface.cpp \
    src/dbus/notification/notification.cpp \
    src/dbus/notification/notificationmanagerproxy.cpp \
    src/selector/audiorecorder.cpp \
    src/selector/thumbnailprovider.cpp \
    src/selector/exif/exif.cpp \
    src/selector/filesmodel.cpp \
    src/selector/filesmodelworker.cpp \
    src/item/translationinfoitem.cpp \

# QML
OTHER_FILES += \
    qml/js/*.js \
    qml/harbour-sailorgram.qml \

# Translations
CONFIG += sailfishapp_i18n

OTHER_FILES += \
    translations/*.ts \
    update_translations_json.sh

TRANSLATIONS += \
    translations/harbour-sailorgram-be.ts \
    translations/harbour-sailorgram-cs.ts \
    translations/harbour-sailorgram-da.ts \
    translations/harbour-sailorgram-de.ts \
    translations/harbour-sailorgram-de_DE.ts \
    translations/harbour-sailorgram-el.ts \
    translations/harbour-sailorgram-es.ts \
    translations/harbour-sailorgram-fa_IR.ts \
    translations/harbour-sailorgram-fi.ts \
    translations/harbour-sailorgram-fr.ts \
    translations/harbour-sailorgram-gl.ts \
    translations/harbour-sailorgram-it.ts \
    translations/harbour-sailorgram-nl_NL.ts \
    translations/harbour-sailorgram-ru.ts \
    translations/harbour-sailorgram-sv.ts \
    translations/harbour-sailorgram-uk_UA.ts \
    translations/harbour-sailorgram.ts

# Resources
RESOURCES += \
    resources.qrc

# Packaging
SAILFISHAPP_ICONS = \
    86x86 \
    108x108 \
    128x128

OTHER_FILES += \
    rpm/harbour-sailorgram.changes \
    rpm/harbour-sailorgram.spec \
    rpm/harbour-sailorgram.yaml \
    harbour-sailorgram.desktop \
    qml/cover/*.png

DISTFILES += \
    qml/items/message/ForwardItem.qml \
    qml/items/sticker/StickerCategory.qml
