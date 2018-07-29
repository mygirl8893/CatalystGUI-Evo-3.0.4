#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class DepositListModel : public QSortFilterProxyModel {
  Q_OBJECT

public:
  DepositListModel();
  ~DepositListModel();

protected:
  bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const Q_DECL_OVERRIDE;
};

}
