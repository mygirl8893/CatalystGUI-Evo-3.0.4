#pragma once

#include <QDialog>

namespace Ui {
class NewNodeDialog;
}

namespace WalletGui {

class NewNodeDialog : public QDialog {
  Q_OBJECT

public:
  NewNodeDialog(QWidget* _parent);
  ~NewNodeDialog();

  QString getHost() const;
  quint16 getPort() const;

private:
  QScopedPointer<Ui::NewNodeDialog> m_ui;
};

}
