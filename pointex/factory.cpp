// Copyright (c) 1994-2009 Georgia Tech Research Corporation, Atlanta, GA
// This file is part of FalconView(tm).

// FalconView(tm) is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// FalconView(tm) is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public License
// along with FalconView(tm).  If not, see <http://www.gnu.org/licenses/>.

// FalconView(tm) is a trademark of Georgia Tech Research Corporation.



#include "stdafx.h"
#include "factory.h"
#include "param.h"  // for PRM_
#include "file.h"  // for FIL_access()
#include "PntExprt.h"
#include "..\getobjpr.h"

#include "FalconView/include/InternalToolbarImpl.h"

// {195B41F7-B8A0-4f3c-B359-C90CF0A99CE6}
const GUID FVWID_Overlay_PointExport = 
   { 0x195b41f7, 0xb8a0, 0x4f3c, { 0xb3, 0x59, 0xc9, 0xc, 0xf0, 0xa9, 0x9c, 0xe6 } };


CPointExportOverlayEditor::CPointExportOverlayEditor() :
   m_toolbar(new InternalToolbarImpl(IDR_EXPORT_TOOLBAR))
{
}

HCURSOR CPointExportOverlayEditor::get_default_cursor()
{
   return CPointExportOverlay::get_default_cursor();
}

int CPointExportOverlayEditor::set_edit_on(boolean_t edit_on)
{
   m_toolbar->ShowToolbar(edit_on);
   return CPointExportOverlay::set_edit_on(edit_on);
}
