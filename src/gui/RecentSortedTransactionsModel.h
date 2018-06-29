#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class RecentSortedTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(RecentSortedTransactionsModel)

public:
  static RecentSortedTransactionsModel& instance();

protected:
  bool lessThan(const QModelIndex& _left, const QModelIndex& _right) const Q_DECL_OVERRIDE;

private:
  RecentSortedTransactionsModel();
  ~RecentSortedTransactionsModel();
};



}
