#pragma  once

#include <QDialog>

namespace Ui {
class ChangeLanguageDialog;
}

namespace WalletGui {

class ChangeLanguageDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(ChangeLanguageDialog)

public:
  ChangeLanguageDialog(QWidget* _parent);
  ~ChangeLanguageDialog();

  QString getLang() const;
  void initLangList();

private:
  QScopedPointer<Ui::ChangeLanguageDialog> m_ui;
};

}
