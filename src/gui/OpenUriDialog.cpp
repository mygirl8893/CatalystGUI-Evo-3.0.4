#include "OpenUriDialog.h"

#include "ui_openuridialog.h"

namespace WalletGui {

OpenUriDialog::OpenUriDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::OpenUriDialog) {
  m_ui->setupUi(this);
  m_ui->m_uriEdit->setPlaceholderText("Catalyst :");
}

OpenUriDialog::~OpenUriDialog() {
}

QString OpenUriDialog::getURI() const {
  return m_ui->m_uriEdit->text().trimmed();
}

}
