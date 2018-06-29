#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class SortedDepositModel : public QSortFilterProxyModel {
  Q_OBJECT

public:
  static SortedDepositModel& instance();

protected:
  bool lessThan(const QModelIndex& _left, const QModelIndex& _right) const Q_DECL_OVERRIDE;

private:
  SortedDepositModel();
  ~SortedDepositModel();
};

}
