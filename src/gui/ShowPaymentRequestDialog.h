#pragma once

#include <QDialog>

namespace Ui {
class ShowPaymentRequestDialog;
}

namespace WalletGui {

class ShowPaymentRequestDialog : public QDialog {
  Q_OBJECT

public:
  ShowPaymentRequestDialog(QWidget* _parent);
  ~ShowPaymentRequestDialog();

  void setData(const QString &paymentRequest);

  QString payment_request_uri;


private:
  QScopedPointer<Ui::ShowPaymentRequestDialog> m_ui;

  Q_SLOT void copyUri();
  Q_SLOT void saveUri();
  Q_SLOT void saveQRcodeToFile();

};

}
