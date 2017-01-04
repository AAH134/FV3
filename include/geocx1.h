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



#ifndef __GEOCX1_H__
#define __GEOCX1_H__

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CGeocx1 wrapper class

class CGeocx1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CGeocx1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xe4968d73, 0x93b4, 0x11cf, { 0x93, 0x81, 0x2, 0x60, 0x8c, 0x3f, 0x3d, 0x8b } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
   // This is the display datum.
	CString GetDatumText();
	void SetDatumText(LPCTSTR);
   // location text is a formated string in the datum returned by GetDatumText
	CString GetLocationText();
	void SetLocationText(LPCTSTR);
   // Gets and sets the latitude as a WGS-84 decimal degrees value
	double GetLatitude();
	void SetLatitude(double);  // use SetGeocx
   // Gets and sets the longitude as a WGS-84 decimal degrees value
	double GetLongitude();
	void SetLongitude(double); // use SetGeocx
	short GetAlignControls();
	void SetAlignControls(short);
	short GetAlignDatum();
	void SetAlignDatum(short);

// Operations
public:
   // Returns TRUE if either the datum or location has changed
	BOOL OcxGetModify();
   // Sets the latitude and longitude to the given WGS-84 lat/lon.
	void SetGeocx(double dLatitude, double dLongitude);
   // Enable/Disable the OCX control and returns the previous state.
	BOOL EnableWindow(BOOL bEnable);
   void ShowRecentlyUsedLocations(BOOL bShowRecentlyUsedLocations);
   void AddRecentlyUsedLocation(LPCTSTR strRecentlyUsedLocation);
   void UseOtherDisplayFormat(BOOL bUseOtherDisplayFormat);
};

#endif // __GEOCX1_H__