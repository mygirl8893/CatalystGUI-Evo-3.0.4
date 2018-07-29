#include "DepositListModel.h"
#include "DepositModel.h"
#include "SortedDepositModel.h"

namespace WalletGui {

DepositListModel::DepositListModel() : QSortFilterProxyModel() {
  setSourceModel(&SortedDepositModel::instance());
}

DepositListModel::~DepositListModel() {
}

bool DepositListModel::filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const {
  return _sourceColumn == DepositModel::COLUMN_STATE || _sourceColumn == DepositModel::COLUMN_AMOUNT || _sourceColumn == DepositModel::COLUMN_INTEREST ||
    _sourceColumn == DepositModel::COLUMN_SUM || _sourceColumn == DepositModel::COLUMN_YEAR_RATE || _sourceColumn == DepositModel::COLUMN_UNLOCK_HEIGHT ||
    _sourceColumn == DepositModel::COLUMN_SPENDING_TIME;
}

}
