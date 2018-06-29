#pragma once

#include <QDialog>

namespace Ui {
class InfoDialog;
}

namespace WalletGui {

class InfoDialog : public QDialog {
  Q_OBJECT

public:
  InfoDialog(QWidget* _parent);
  ~InfoDialog();

protected:
  void timerEvent(QTimerEvent* _event) Q_DECL_OVERRIDE;

private:
  QScopedPointer<Ui::InfoDialog> m_ui;
  int m_refreshTimerId;
};

}
