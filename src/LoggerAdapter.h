#pragma once

#include "log/LoggerManager.h"

namespace WalletGui {

class LoggerAdapter {

public:
  static LoggerAdapter& instance();
  void init();
  Logging::LoggerManager& getLoggerManager();

private:
  Logging::LoggerManager m_logManager;

  LoggerAdapter();
  ~LoggerAdapter();
};

}
