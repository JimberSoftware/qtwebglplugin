#ifndef QWEBGLPLATFORMINPUTCONTEXT_H
#define QWEBGLPLATFORMINPUTCONTEXT_H

#include <QtGui/qpa/qplatforminputcontext.h>

class QWeblGlPlatformInputContext : public QPlatformInputContext {
  Q_OBJECT
public:
  virtual void showInputPanel() override;
  virtual void hideInputPanel() override;
};

#endif