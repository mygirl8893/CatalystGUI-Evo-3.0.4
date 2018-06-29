#pragma once

#include <QDialog>

namespace Ui {
class RestoreFromMnemonicSeedDialog;
}

namespace WalletGui {

class RestoreFromMnemonicSeedDialog : public QDialog {
  Q_OBJECT

public:
  RestoreFromMnemonicSeedDialog(QWidget* _parent);
  ~RestoreFromMnemonicSeedDialog();

  QString getSeedString() const;
  QString getFilePath() const;

private:
  QScopedPointer<Ui::RestoreFromMnemonicSeedDialog> m_ui;

  int wordCount = 0;

  Q_SLOT void selectPathClicked();
  Q_SLOT void onTextChanged();
};

}
