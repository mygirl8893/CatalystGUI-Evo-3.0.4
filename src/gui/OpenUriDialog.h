#pragma once

#include <QDialog>

namespace Ui {
class OpenUriDialog;
}

namespace WalletGui {

class OpenUriDialog : public QDialog {
  Q_OBJECT

public:
  OpenUriDialog(QWidget* _parent);
  ~OpenUriDialog();

  QString getURI() const;

private:
  QScopedPointer<Ui::OpenUriDialog> m_ui;
};

}
