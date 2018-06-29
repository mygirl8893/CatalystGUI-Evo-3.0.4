#pragma once

#include <QDateTime>
#include <QSortFilterProxyModel>

namespace WalletGui {

class SortedAddressBookModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(SortedAddressBookModel)

public:
  static SortedAddressBookModel& instance();
  void setSearchFor(const QString &searchstring);

protected:
  bool filterAcceptsRow(int _row, const QModelIndex &_parent) const Q_DECL_OVERRIDE;

private:
  SortedAddressBookModel();
  ~SortedAddressBookModel();

  QString searchstring;
};

}
