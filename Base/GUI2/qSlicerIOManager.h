#ifndef __qSlicerIOManager_h
#define __qSlicerIOManager_h 

#include "qSlicerBaseGUI2Win32Header.h"
#include <QString>

class Q_SLICER_BASE_GUI2_EXPORT qSlicerIOManager
{

public:
   
  // Description:
  static void loadScene(const QString& fileName);
  
  // Description:
  static void importScene(const QString& fileName);
  
   // Description:
  static void addData(const QString& fileName);
  
  // Description:
  static void addVolume(const QString& fileName);
  
  // Description:
  static void addTransform(const QStringList& fileName);
  
private:
  qSlicerIOManager(){} // Not implemented
  virtual ~qSlicerIOManager(){} // Not implemented
};

#endif
