/*=========================================================================

  Program:   ParaView
  Module:    vtkSIDoubleMapProperty.h

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// .NAME vtkSIDoubleMapProperty
// .SECTION Description
// Map property that manage double value to be set through a method
// on a vtkObject.

#ifndef vtkSIDoubleMapProperty_h
#define vtkSIDoubleMapProperty_h

#include "vtkPVServerImplementationCoreModule.h" //needed for exports
#include "vtkSIProperty.h"

class VTKPVSERVERIMPLEMENTATIONCORE_EXPORT vtkSIDoubleMapProperty : public vtkSIProperty
{
public:
  static vtkSIDoubleMapProperty* New();
  vtkTypeMacro(vtkSIDoubleMapProperty, vtkSIProperty);
  void PrintSelf(ostream& os, vtkIndent indent);

  vtkGetStringMacro(CleanCommand)
  vtkSetStringMacro(CleanCommand)

protected:
  vtkSIDoubleMapProperty();
  ~vtkSIDoubleMapProperty();

  virtual bool Push(vtkSMMessage*, int);
  virtual bool ReadXMLAttributes(vtkSIProxy* parent, vtkPVXMLElement* element);

  unsigned int NumberOfComponents;
  char *CleanCommand;

private:
  vtkSIDoubleMapProperty(const vtkSIDoubleMapProperty&) VTK_DELETE_FUNCTION;
  void operator=(const vtkSIDoubleMapProperty&) VTK_DELETE_FUNCTION;
};

#endif
