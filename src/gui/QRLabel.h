#pragma once

#include <QLabel>
#include <QMenu>

namespace WalletGui {

class QRLabel : public QLabel {
  Q_OBJECT

public:
  QRLabel(QWidget* _parent);
  ~QRLabel();

  void showQRCode(const QString& _dataString);
  QImage exportImage();

Q_SIGNALS:
    void clicked();

public Q_SLOTS:
    void saveImage();
    void copyImage();

protected:
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void contextMenuEvent(QContextMenuEvent* event);

private:
    QMenu* contextMenu;
    QString m_qrString;

};

}
