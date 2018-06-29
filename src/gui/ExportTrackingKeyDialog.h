#include <QDialog>

namespace Ui {
class ExportTrackingKeyDialog;
}

namespace WalletGui {

class ExportTrackingKeyDialog : public QDialog {
    Q_OBJECT

public:
    ExportTrackingKeyDialog(QWidget * _parent);
    void walletOpened();
    void walletClosed();
    ~ExportTrackingKeyDialog();

private:
    QString trackingWalletKeys;
    Q_SLOT void copyKey();
    Q_SLOT void saveKeyToFile();

    QScopedPointer<Ui::ExportTrackingKeyDialog> m_ui;
};

}
