// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHAT
#define LQTG_TYPE_CHAT

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QString>
#include "geopoint.h"
#include "chatphoto.h"

class LIBQTELEGRAMSHARED_EXPORT Chat : public TelegramTypeObject
{
public:
    enum ChatType {
        typeChatEmpty = 0x9ba2d800,
        typeChat = 0x6e9c9bc7,
        typeChatForbidden = 0xfb0ccc41,
        typeGeoChat = 0x75eaea5a
    };

    Chat(ChatType classType = typeChatEmpty, InboundPkt *in = 0);
    Chat(InboundPkt *in);
    virtual ~Chat();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setAddress(const QString &address);
    QString address() const;

    void setCheckedIn(bool checkedIn);
    bool checkedIn() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setGeo(const GeoPoint &geo);
    GeoPoint geo() const;

    void setId(qint32 id);
    qint32 id() const;

    void setLeft(bool left);
    bool left() const;

    void setParticipantsCount(qint32 participantsCount);
    qint32 participantsCount() const;

    void setPhoto(const ChatPhoto &photo);
    ChatPhoto photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setVenue(const QString &venue);
    QString venue() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(ChatType classType);
    ChatType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Chat &b);

private:
    qint64 m_accessHash;
    QString m_address;
    bool m_checkedIn;
    qint32 m_date;
    GeoPoint m_geo;
    qint32 m_id;
    bool m_left;
    qint32 m_participantsCount;
    ChatPhoto m_photo;
    QString m_title;
    QString m_venue;
    qint32 m_version;
    ChatType m_classType;
};

#endif // LQTG_TYPE_CHAT