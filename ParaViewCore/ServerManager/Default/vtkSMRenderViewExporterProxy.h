/*=========================================================================

  Program:   ParaView
  Module:    vtkSMRenderViewExporterProxy.h

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// .NAME vtkSMRenderViewExporterProxy - proxy for vtkExporter subclasses which
// work with render windows.
// .SECTION Description
// vtkSMRenderViewExporterProxy is a proxy for vtkExporter subclasses. It makes it
// possible to export render views using these exporters.

#ifndef vtkSMRenderViewExporterProxy_h
#define vtkSMRenderViewExporterProxy_h

#include "vtkPVServerManagerDefaultModule.h" //needed for exports
#include "vtkSMExporterProxy.h"

class VTKPVSERVERMANAGERDEFAULT_EXPORT vtkSMRenderViewExporterProxy : public vtkSMExporterProxy
{
public:
  static vtkSMRenderViewExporterProxy* New();
  vtkTypeMacro(vtkSMRenderViewExporterProxy, vtkSMExporterProxy);
  void PrintSelf(ostream& os, vtkIndent indent);

  // Description:
  // Exports the view.
  virtual void Write();

  // Description:
  // Returns if the view can be exported. 
  // Default implementation return true if the view is a render view.
  virtual bool CanExport(vtkSMProxy*);

protected:
  vtkSMRenderViewExporterProxy();
  ~vtkSMRenderViewExporterProxy();

private:
  vtkSMRenderViewExporterProxy(const vtkSMRenderViewExporterProxy&) VTK_DELETE_FUNCTION;
  void operator=(const vtkSMRenderViewExporterProxy&) VTK_DELETE_FUNCTION;

};

#endif

