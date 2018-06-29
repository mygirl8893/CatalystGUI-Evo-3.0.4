#pragma once

#include <QObject>
#include <QNetworkAccessManager>

namespace WalletGui {

class AddressProvider : public QObject {
  Q_OBJECT

public:
  AddressProvider(QObject *parent);
  ~AddressProvider();

  void getAddress(const QString& _urlString);

private:
  QNetworkAccessManager m_networkManager;
  void readyRead();

Q_SIGNALS:
  void addressFoundSignal(const QString& _address);
};

}
