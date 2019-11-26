#pragma once



// CTstatAQ 窗体视图

class CTstatAQ : public CFormView
{
	DECLARE_DYNCREATE(CTstatAQ)

protected:
	
	

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TSTAT_AQ };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:
    CTstatAQ();           // 动态创建所使用的受保护的构造函数
    virtual ~CTstatAQ();
    void Fresh();
    void UpdateUI();
    virtual void OnInitialUpdate();
    afx_msg LRESULT UpdateUI(WPARAM wParam, LPARAM lParam);
    afx_msg void OnEnKillfocusEditCo2OnTime();
    afx_msg void OnEnKillfocusEditCo2OffTime();
    afx_msg void OnEnKillfocusEditPmOnTime();
    afx_msg void OnEnKillfocusEditPmOffTime();
};
static DWORD WINAPI Update_TstatAQ_Thread(LPVOID lPvoid);

const int TSTAT_AQ_TEMPERATURE = 121;
const int TSTAT_AQ_HUM = 140;
const int TSTAT_AQ_CO2 = 139;
const int TSTAT_AQ_VOC = 998;
const int TSTAT_AQ_WEIGHT_1 = 760;
const int TSTAT_AQ_WEIGHT_2_5 = 761;
const int TSTAT_AQ_WEIGHT_4 = 762;
const int TSTAT_AQ_WEIGHT_10 = 763;
const int TSTAT_AQ_INDEX_1 = 764;
const int TSTAT_AQ_INDEX_2_5 = 765;
const int TSTAT_AQ_INDEX_4 = 766;
const int TSTAT_AQ_INDEX_10 = 767;
const int TSTAT_AQ_LIGHT = 628;
const int TSTAT_AQ_SOUND = 640;
const int TATAT_AQ_CO2_ON = 1009;
const int TATAT_AQ_CO2_OFF = 1010;
const int TATAT_AQ_PM_ON = 1011;
const int TATAT_AQ_PM_OFF = 1012;



