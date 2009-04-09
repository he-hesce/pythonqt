#include "PythonQtWrapper_QStatusTipEvent.h"

#include <QVariant>

QStatusTipEvent* PythonQtWrapper_QStatusTipEvent::new_QStatusTipEvent(const QString&  tip)
{ 
return new QStatusTipEvent(tip); }

QString  PythonQtWrapper_QStatusTipEvent::tip(QStatusTipEvent* theWrappedObject) const
{
return theWrappedObject->tip();
}

