#pragma once

#include <QDnsLookup>
#include <QHostAddress>
#include <QStringList>

namespace WalletGui {

class DnsManager : public QObject {
  Q_OBJECT

public:
  DnsManager(QObject *parent);
  ~DnsManager();

  void getAddresses(const QString& _urlString);

public slots:
  void handleTxtRecords();

private:
  QDnsLookup *m_dns;
  QStringList Records;

Q_SIGNALS:
  void aliasFoundSignal(const QString& _name, const QString& _address);

};

}

