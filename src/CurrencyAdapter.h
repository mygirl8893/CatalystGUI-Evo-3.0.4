#pragma once

#include <QString>

#include "core/Currency.h"

namespace WalletGui {

class CurrencyAdapter {

public:
  static CurrencyAdapter& instance();

  const CryptoNote::Currency& getCurrency();
  QString getCurrencyDisplayName() const;
  QString getCurrencyName() const;
  QString getCurrencyTicker() const;
  quint64 calculateInterest(quint64 _amount, quint32 _term, uint32_t height) const;
  quint64 getMinimumFee() const;
  quint64 getAddressPrefix() const;
  quint64 getDepositMinAmount() const;
  quint32 getDepositMinTerm() const;
  quint32 getDepositMaxTerm() const;
  quint64 getDifficultyTarget() const;
  quintptr getNumberOfDecimalPlaces() const;
  QString formatAmount(quint64 _amount) const;
  quint64 parseAmount(const QString& _amountString) const;
  bool validateAddress(const QString& _address) const;
  QString generatePaymentId() const;
  CryptoNote::AccountPublicAddress internalAddress(const QString& _address) const;

private:
  CryptoNote::Currency m_currency;

  CurrencyAdapter();
  ~CurrencyAdapter();
};

}
