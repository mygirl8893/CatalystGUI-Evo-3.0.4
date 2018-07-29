#pragma once

#include <QFrame>
#include <IWallet.h>
#include <IWalletLegacy.h>

namespace Ui {
class DepositsFrame;
}

namespace WalletGui {

class DepositListModel;

class DepositsFrame : public QFrame {
  Q_OBJECT

public:
  DepositsFrame(QWidget* _parent);
  ~DepositsFrame();

private:
  QScopedPointer<Ui::DepositsFrame> m_ui;
  QScopedArrayPointer<DepositListModel> m_depositModel;

  void actualDepositBalanceUpdated(quint64 _balance);
  void pendingDepositBalanceUpdated(quint64 _balance);
  void walletActualBalanceUpdated(quint64 _balance);
  void reset();

  Q_SLOT void depositClicked();
  Q_SLOT void depositParamsChanged();
  Q_SLOT void showDepositDetails(const QModelIndex& _index);
  Q_SLOT void timeChanged(int _value);
  Q_SLOT void withdrawClicked();
};

}
