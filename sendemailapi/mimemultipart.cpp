#include "mimemultipart.h"
#include <QTime>
#include <QCryptographicHash>
#include <QtGlobal>
#include <QRandomGenerator>

const QString MULTI_PART_NAMES[] = {
    "multipart/mixed",         //    Mixed
    "multipart/digest",        //    Digest
    "multipart/alternative",   //    Alternative
    "multipart/related",       //    Related
    "multipart/report",        //    Report
    "multipart/signed",        //    Signed
    "multipart/encrypted"      //    Encrypted
};


MimeMultiPart::MimeMultiPart(MultiPartType type)
{
    this->type = type;
    this->cType = MULTI_PART_NAMES[this->type];
    this->cEncoding = _8Bit;

    QCryptographicHash md5(QCryptographicHash::Md5);
    md5.addData(QByteArray().append(QRandomGenerator::global()->generate()));
    cBoundary = md5.result().toHex();
}


MimeMultiPart::~MimeMultiPart() {

}

void MimeMultiPart::addPart(MimePart *part) {
    parts.append(part);
}

const QList<MimePart*> & MimeMultiPart::getParts() const {
    return parts;
}

void MimeMultiPart::prepare() {
    QList<MimePart*>::iterator it;

    content = "";
    for (it = parts.begin(); it != parts.end(); it++) {
        content += QByteArray("--").append(cBoundary.toUtf8()).append("\r\n");
        (*it)->prepare();
        content += "--" + QByteArray(cBoundary.toUtf8()) + "\r\n";
    };

    content += "--" + QByteArray(cBoundary.toUtf8()) + "--\r\n";

    MimePart::prepare();
}

void MimeMultiPart::setMimeType(const MultiPartType type) {
    this->type = type;
    this->cType = MULTI_PART_NAMES[type];
}

MimeMultiPart::MultiPartType MimeMultiPart::getMimeType() const {
    return type;
}
