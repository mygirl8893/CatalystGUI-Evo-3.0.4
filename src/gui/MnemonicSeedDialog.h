#include <QDialog>

namespace Ui {
class MnemonicSeedDialog;
}

namespace WalletGui {

class MnemonicSeedDialog : public QDialog {
    Q_OBJECT

public:
    MnemonicSeedDialog(QWidget * _parent);
    void walletOpened();
    void walletClosed();
    ~MnemonicSeedDialog();

private:
    QScopedPointer<Ui::MnemonicSeedDialog> m_ui;

    void initLanguages();
    QString getLanguageName();

    Q_SLOT void languageChanged();
};

}
