#pragma once

#include <QFrame>

namespace Ui {
class AccountFrame;
}

namespace WalletGui {

class AccountFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(AccountFrame)

public:
  AccountFrame(QWidget* _parent);
  ~AccountFrame();

private:
  QScopedPointer<Ui::AccountFrame> m_ui;

  void updateWalletAddress(const QString& _address);
  void updateWalletBalance(quint64 _balance);
  void reset();

  Q_SLOT void copyAddress();
  Q_SLOT void showQR();
  Q_SLOT void clearLabel();

Q_SIGNALS:
  void showQRcodeSignal();

};

}
