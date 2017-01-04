// Wizard-generated connection point proxy class
// WARNING: This file may be regenerated by the wizard


#pragma once

template<class T>
class CProxyIFvOverlayManagerEvents :
   public IConnectionPointImpl<T, &__uuidof(FalconViewOverlayLib::IFvOverlayManagerEvents)>
{
public:
	HRESULT Fire_OnOverlayOpened(FalconViewOverlayLib::IFvOverlay* overlay)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			FalconViewOverlayLib::IFvOverlayManagerEvents* pConnection = 
            static_cast<FalconViewOverlayLib::IFvOverlayManagerEvents*>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->OnOverlayOpened(overlay);
			}
		}
		return hr;
	}
   HRESULT Fire_OnOverlayClosed(FalconViewOverlayLib::IFvOverlay* overlay)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			FalconViewOverlayLib::IFvOverlayManagerEvents* pConnection = 
            static_cast<FalconViewOverlayLib::IFvOverlayManagerEvents*>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->OnOverlayClosed(overlay);
			}
		}
		return hr;
	}
   HRESULT Fire_OnOverlayOrderChanged()
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			FalconViewOverlayLib::IFvOverlayManagerEvents* pConnection = 
            static_cast<FalconViewOverlayLib::IFvOverlayManagerEvents*>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->OnOverlayOrderChanged();
			}
		}
		return hr;
	}
   HRESULT Fire_OnFileSpecificationChanged(FalconViewOverlayLib::IFvOverlay* overlay,
      BSTR new_file_specification)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			FalconViewOverlayLib::IFvOverlayManagerEvents* pConnection = 
            static_cast<FalconViewOverlayLib::IFvOverlayManagerEvents*>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->OnFileSpecificationChanged(overlay, new_file_specification);
			}
		}
		return hr;
	}
   HRESULT Fire_OnIsDirtyChanged(FalconViewOverlayLib::IFvOverlay* overlay,
      long new_is_dirty)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			FalconViewOverlayLib::IFvOverlayManagerEvents* pConnection = 
            static_cast<FalconViewOverlayLib::IFvOverlayManagerEvents*>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->OnIsDirtyChanged(overlay, new_is_dirty);
			}
		}
		return hr;
	}
};