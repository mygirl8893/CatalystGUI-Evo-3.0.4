#pragma once

#include <QDialog>

namespace Ui {
class ImportTrackingKeyDialog;
}

namespace WalletGui {

class ImportTrackingKeyDialog : public QDialog {
  Q_OBJECT

public:
  ImportTrackingKeyDialog(QWidget* _parent);
  ~ImportTrackingKeyDialog();

  QString getKeyString() const;
  QString getFilePath() const;

private:
  QScopedPointer<Ui::ImportTrackingKeyDialog> m_ui;

  Q_SLOT void selectPathClicked();
};

}
