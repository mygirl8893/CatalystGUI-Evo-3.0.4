#include "NewNodeDialog.h"

#include "ui_newnodedialog.h"

namespace WalletGui {

NewNodeDialog::NewNodeDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::NewNodeDialog) {
  m_ui->setupUi(this);
}

NewNodeDialog::~NewNodeDialog() {
}

QString NewNodeDialog::getHost() const {
  return m_ui->m_hostEdit->text().trimmed();
}

quint16 NewNodeDialog::getPort() const {
  return m_ui->m_portSpin->value();
}

}
