#pragma once

#include <QDialog>

namespace Ui {
class DepositDetailsDialog;
}

namespace WalletGui {

class DepositDetailsDialog : public QDialog {
  Q_OBJECT

public:
  DepositDetailsDialog(const QModelIndex &_index, QWidget* _parent);
  ~DepositDetailsDialog();

private:
  QScopedPointer<Ui::DepositDetailsDialog> m_ui;
  const QString m_detailsTemplate;
};

}
