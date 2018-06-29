#pragma  once

#include <QDialog>

namespace Ui {
class ConnectionSettingsDialog;
}

namespace WalletGui {

class NodeModel;

class ConnectionSettingsDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(ConnectionSettingsDialog)

public:
  ConnectionSettingsDialog(QWidget* _parent);
  ~ConnectionSettingsDialog();

  QString setConnectionMode() const;
  quint16 setLocalDaemonPort() const;
  QString setRemoteNode() const;
  void initConnectionSettings();

private:
  QScopedPointer<Ui::ConnectionSettingsDialog> m_ui;
  NodeModel* m_nodeModel;

  Q_SLOT void addNodeClicked();
  Q_SLOT void removeNodeClicked();

};

}

