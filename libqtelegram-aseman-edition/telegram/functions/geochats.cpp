// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "geochats.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

using namespace Tg;

Functions::Geochats::Geochats() {
}

Functions::Geochats::~Geochats() {
}

bool Functions::Geochats::getLocated(OutboundPkt *out, const InputGeoPoint &geoPoint, qint32 radius, qint32 limit) {
    out->appendInt(fncGeochatsGetLocated);
    if(!geoPoint.push(out)) return false;
    out->appendInt(radius);
    out->appendInt(limit);
    return true;
}

GeochatsLocated Functions::Geochats::getLocatedResult(InboundPkt *in) {
    GeochatsLocated result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::getRecents(OutboundPkt *out, qint32 offset, qint32 limit) {
    out->appendInt(fncGeochatsGetRecents);
    out->appendInt(offset);
    out->appendInt(limit);
    return true;
}

GeochatsMessages Functions::Geochats::getRecentsResult(InboundPkt *in) {
    GeochatsMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::checkin(OutboundPkt *out, const InputGeoChat &peer) {
    out->appendInt(fncGeochatsCheckin);
    if(!peer.push(out)) return false;
    return true;
}

GeochatsStatedMessage Functions::Geochats::checkinResult(InboundPkt *in) {
    GeochatsStatedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::getFullChat(OutboundPkt *out, const InputGeoChat &peer) {
    out->appendInt(fncGeochatsGetFullChat);
    if(!peer.push(out)) return false;
    return true;
}

MessagesChatFull Functions::Geochats::getFullChatResult(InboundPkt *in) {
    MessagesChatFull result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::editChatTitle(OutboundPkt *out, const InputGeoChat &peer, const QString &title, const QString &address) {
    out->appendInt(fncGeochatsEditChatTitle);
    if(!peer.push(out)) return false;
    out->appendQString(title);
    out->appendQString(address);
    return true;
}

GeochatsStatedMessage Functions::Geochats::editChatTitleResult(InboundPkt *in) {
    GeochatsStatedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::editChatPhoto(OutboundPkt *out, const InputGeoChat &peer, const InputChatPhoto &photo) {
    out->appendInt(fncGeochatsEditChatPhoto);
    if(!peer.push(out)) return false;
    if(!photo.push(out)) return false;
    return true;
}

GeochatsStatedMessage Functions::Geochats::editChatPhotoResult(InboundPkt *in) {
    GeochatsStatedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::search(OutboundPkt *out, const InputGeoChat &peer, const QString &q, const MessagesFilter &filter, qint32 minDate, qint32 maxDate, qint32 offset, qint32 maxId, qint32 limit) {
    out->appendInt(fncGeochatsSearch);
    if(!peer.push(out)) return false;
    out->appendQString(q);
    if(!filter.push(out)) return false;
    out->appendInt(minDate);
    out->appendInt(maxDate);
    out->appendInt(offset);
    out->appendInt(maxId);
    out->appendInt(limit);
    return true;
}

GeochatsMessages Functions::Geochats::searchResult(InboundPkt *in) {
    GeochatsMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::getHistory(OutboundPkt *out, const InputGeoChat &peer, qint32 offset, qint32 maxId, qint32 limit) {
    out->appendInt(fncGeochatsGetHistory);
    if(!peer.push(out)) return false;
    out->appendInt(offset);
    out->appendInt(maxId);
    out->appendInt(limit);
    return true;
}

GeochatsMessages Functions::Geochats::getHistoryResult(InboundPkt *in) {
    GeochatsMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::setTyping(OutboundPkt *out, const InputGeoChat &peer, bool typing) {
    out->appendInt(fncGeochatsSetTyping);
    if(!peer.push(out)) return false;
    out->appendBool(typing);
    return true;
}

bool Functions::Geochats::setTypingResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Geochats::sendMessage(OutboundPkt *out, const InputGeoChat &peer, const QString &message, qint64 randomId) {
    out->appendInt(fncGeochatsSendMessage);
    if(!peer.push(out)) return false;
    out->appendQString(message);
    out->appendLong(randomId);
    return true;
}

GeochatsStatedMessage Functions::Geochats::sendMessageResult(InboundPkt *in) {
    GeochatsStatedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::sendMedia(OutboundPkt *out, const InputGeoChat &peer, const InputMedia &media, qint64 randomId) {
    out->appendInt(fncGeochatsSendMedia);
    if(!peer.push(out)) return false;
    if(!media.push(out)) return false;
    out->appendLong(randomId);
    return true;
}

GeochatsStatedMessage Functions::Geochats::sendMediaResult(InboundPkt *in) {
    GeochatsStatedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Geochats::createGeoChat(OutboundPkt *out, const QString &title, const InputGeoPoint &geoPoint, const QString &address, const QString &venue) {
    out->appendInt(fncGeochatsCreateGeoChat);
    out->appendQString(title);
    if(!geoPoint.push(out)) return false;
    out->appendQString(address);
    out->appendQString(venue);
    return true;
}

GeochatsStatedMessage Functions::Geochats::createGeoChatResult(InboundPkt *in) {
    GeochatsStatedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}
