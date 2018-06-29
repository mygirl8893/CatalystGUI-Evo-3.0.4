#include <QDialog>

namespace Ui {
class PrivateKeysDialog;
}

namespace WalletGui {

class PrivateKeysDialog : public QDialog {
    Q_OBJECT

public:
    PrivateKeysDialog(QWidget * _parent);
    void walletOpened();
    void walletClosed();
    ~PrivateKeysDialog();

private:
    Q_SLOT void copyKey();

    QScopedPointer<Ui::PrivateKeysDialog> m_ui;
};

}
