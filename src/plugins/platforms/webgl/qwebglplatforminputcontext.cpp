#include "qwebglplatforminputcontext.h"
#include "qwebglintegration_p.h"
#include <QtCore/qdebug.h>

void QWeblGlPlatformInputContext::showInputPanel() {
    qInfo() << "Show input panel";
     auto integrationPrivate = QWebGLIntegrationPrivate::instance();
     integrationPrivate->showInput();
}
void QWeblGlPlatformInputContext::hideInputPanel() {
    qInfo() << "Hide input panel";
}