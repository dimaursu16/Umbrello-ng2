#ifndef DOCK_GROUP_BASE_H
#define DOCK_GROUP_BASE_H

#include "ui_package.h"

#include <QtGui/QWidget>

class UMLObject;

class PageGroupBase : public QWidget
{
   Q_OBJECT
   public:
       PageGroupBase(QWidget* parent = NULL);
       virtual ~PageGroupBase();

       //Setters
       virtual void setCurrentObject(UMLObject* o) = 0;

};

#endif
