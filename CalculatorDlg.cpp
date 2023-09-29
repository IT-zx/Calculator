
// CalculatorDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"

#define pi 3.1415926545898
#define std_angle (pi/180)

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCalculatorDlg 对话框



CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mStr);
	DDX_Text(pDX, IDC_EDIT2, mStr1);
	DDX_Text(pDX, IDC_EDIT3, mStr2);
	DDX_Text(pDX, IDC_EDIT4, mStr3);
	DDX_Text(pDX, IDC_EDIT5, mStr4);
	DDX_Text(pDX, IDC_EDIT6, mStr5);
	DDX_Text(pDX, IDC_EDIT7, mStr6);
	DDX_Text(pDX, IDC_EDIT8, mStr7);
	DDX_Text(pDX, IDC_EDIT9, mStr8);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_5, &CCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON_1, &CCalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, &CCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_3, &CCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON_6, &CCalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_7, &CCalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON_8, &CCalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON_9, &CCalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_0, &CCalculatorDlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_dian, &CCalculatorDlg::OnBnClickedButtondian)
	ON_BN_CLICKED(IDC_BUTTON_Back, &CCalculatorDlg::OnBnClickedButtonBack)
	ON_BN_CLICKED(IDC_BUTTON_C, &CCalculatorDlg::OnBnClickedButtonC)
	ON_BN_CLICKED(IDC_BUTTON_CA, &CCalculatorDlg::OnBnClickedButtonCa)
	ON_BN_CLICKED(IDC_BUTTON_jia, &CCalculatorDlg::OnBnClickedButtonjia)
	ON_BN_CLICKED(IDC_BUTTON_dengyu, &CCalculatorDlg::OnBnClickedButtondengyu)
	ON_BN_CLICKED(IDC_BUTTON_lognx, &CCalculatorDlg::OnBnClickedButtonlognx)
	ON_BN_CLICKED(IDC_BUTTON_2cifang, &CCalculatorDlg::OnBnClickedButton2cifang)
	ON_BN_CLICKED(IDC_BUTTON_genhao, &CCalculatorDlg::OnBnClickedButtongenhao)
	ON_BN_CLICKED(IDC_BUTTON6_sancifang, &CCalculatorDlg::OnBnClickedButton6sancifang)
	ON_BN_CLICKED(IDC_BUTTON_kai3fang, &CCalculatorDlg::OnBnClickedButtonkai3fang)
	ON_BN_CLICKED(IDC_BUTTON_jiecheng, &CCalculatorDlg::OnBnClickedButtonjiecheng)
	ON_BN_CLICKED(IDC_BUTTON_sinx, &CCalculatorDlg::OnBnClickedButtonsinx)
	ON_BN_CLICKED(IDC_BUTTON_cosx, &CCalculatorDlg::OnBnClickedButtoncosx)
	ON_BN_CLICKED(IDC_BUTTON_tanx, &CCalculatorDlg::OnBnClickedButtontanx)
	ON_BN_CLICKED(IDC_BUTTON_lnx, &CCalculatorDlg::OnBnClickedButtonlnx)
	ON_BN_CLICKED(IDC_BUTTON_edexcifang, &CCalculatorDlg::OnBnClickedButtonedexcifang)
	ON_BN_CLICKED(IDC_BUTTON_kaiNfang, &CCalculatorDlg::OnBnClickedButtonkainfang)
	ON_BN_CLICKED(IDC_BUTTON_Ncifang, &CCalculatorDlg::OnBnClickedButtonNcifang)
	ON_BN_CLICKED(IDC_BUTTON_mod, &CCalculatorDlg::OnBnClickedButtonmod)
	ON_BN_CLICKED(IDC_BUTTON_chu, &CCalculatorDlg::OnBnClickedButtonchu)
	ON_BN_CLICKED(IDC_BUTTON_cheng, &CCalculatorDlg::OnBnClickedButtoncheng)
	ON_BN_CLICKED(IDC_BUTTON_jian, &CCalculatorDlg::OnBnClickedButtonjian)
END_MESSAGE_MAP()


// CCalculatorDlg 消息处理程序

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CCalculatorDlg::SaveFirstValue() {
	UpdateData(TRUE);
	mNum1 = _wtof(mStr);
	mTempStr = mStr;
	mStr = L"";
	UpdateData(FALSE);
}

void CCalculatorDlg::Calculator() {
	UpdateData(TRUE);
	mNum2 = _wtof(mStr);
	double result = 0.0f;
	switch(mFlag) {
		case FLAG_JIA:					//加
			result = mNum1 + mNum2;
			mTempStr = mTempStr + _T("+") + mStr + _T("=");
			break;
		case FLAG_JIAN:					//减	
			result = mNum1 - mNum2;
			mTempStr = mTempStr + _T("-") + mStr + _T("=");
			break;
		case FLAG_CHENG:				//乘
			result = mNum1 * mNum2;
			mTempStr = mTempStr + _T("*") + mStr + _T("=");
			break;
		case FLAG_CHU:					//除
			if (mNum2 == 0.0f) {
				result = mNum1;
				mTempStr = _T("---除数不能为0！！---");
				break;
			}
			else {
				result = mNum1 / mNum2;
				mTempStr = mTempStr + _T("/") + mStr + _T("=");
			}
			break;

		case FLAG_NFANG:				//n方
			result = pow(mNum1, mNum2);
			mTempStr = mTempStr + _T("^") + mStr + _T("=");
			break;
		case FLAG_KAINFANG:				//开n方
			if (mNum1 >= 0) {
				result = pow(mNum1,1.0/mNum2);
				mTempStr = mStr + _T("√") + mTempStr + _T("=");
			}
			else {
				mTempStr = _T("根号下不能为负!!!");
			}
			break;
		case FLAG_MOD:				//mod
			result = (int)mNum1 % (int)mNum2;
			mTempStr = mTempStr + _T("%") + mStr + _T("=");
			break;
		case FLAG_LOGNX:				//lognx
			result = log(mNum2) / log(mNum1);
			mTempStr = _T("log") + mTempStr + _T("(") + mStr + _T(")=");
			break;
		case FLAG_PINGFANG:				//平方
			result = mNum2 * mNum2;
			mTempStr = mTempStr + _T("^2=");
			break;
		case FLAG_KAIFANG:				//开方
			result = sqrt(mNum1);
			mTempStr = _T("2√") + mTempStr + _T("=");
			break;
		case FLAG_LIFANG:				//立方
			result = mNum2 * mNum2 * mNum2;
			mTempStr = mTempStr + _T("^3=");
			break;
		case FLAG_KAILIFANG:				//开立方
			result = pow(mNum1, 1.0 / 3);
			mTempStr = _T("3√") + mTempStr + _T("=");
			break;
		default:
			break;
	}
	//如果浮点数是整数就显示整数
	if (result - int(result) <= 1e-5) {
		mStr.Format(L"%d", (int)result);
	}
	else {
		mStr.Format(L"%f", result);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = result;
	mNum2 = 0.0f;
}

void CCalculatorDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"5";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"1";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"2";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"3";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"4";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"6";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"7";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"8";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"9";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButton0()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"0";
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButtondian()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//如果没有小数点，加上一个小数点，如果已有小数点就忽略此次的小数点，保证只有一个
	if (-1 == mStr.Find(L'.')) {
		mStr += ".";
	}
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButtonBack()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!mStr.IsEmpty()) {
		mStr = mStr.Left(mStr.GetLength() - 1);
	}
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButtonC()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButtonCa()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mStr1 = L"";
	mStr2 = L"";
	mStr3 = L"";
	mStr4 = L"";
	mStr5 = L"";
	mStr6 = L"";
	mStr7 = L"";
	mStr8 = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;
	UpdateData(FALSE);
}


void CCalculatorDlg::OnBnClickedButtonjia()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIA;
}


void CCalculatorDlg::OnBnClickedButtondengyu()
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}


void CCalculatorDlg::OnBnClickedButtonlognx()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_LOGNX;
}


void CCalculatorDlg::OnBnClickedButton2cifang()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^2=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_PINGFANG;
}


void CCalculatorDlg::OnBnClickedButtongenhao()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr =_T("√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f;
	if (mNum1 >= 0) {
		f = sqrt(mNum1);
		if (f - int(f) <= 1e-5) {
			mStr.Format(L"%d", (int)f);
		}
		else {
			mStr.Format(L"%f", f);
		}
	}
	else {
		mTempStr = _T("负数不能开方！！");
	}
	
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAIFANG;
}


void CCalculatorDlg::OnBnClickedButton6sancifang()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^3=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1 * mNum1;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LIFANG;
}


void CCalculatorDlg::OnBnClickedButtonkai3fang()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("3√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f;
	if (mNum1 >= 0) {
		f = sqrt(mNum1);
		if (f - int(f) <= 1e-5) {
			mStr.Format(L"%d", (int)f);
		}
		else {
			mStr.Format(L"%f", f);
		}
	}
	else {
		mTempStr = _T("负数不能开方！！");
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAILIFANG;
}


void CCalculatorDlg::OnBnClickedButtonjiecheng()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("!=");
	mNum1 = _wtof(mStr);
	double f = 1;
	int index = (int)mNum1;
	while (index > 0) {
		f *= index;
		index = index - 1;
	}
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIECHENG;
}


void CCalculatorDlg::OnBnClickedButtonsinx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("sin(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_SINX;
}


void CCalculatorDlg::OnBnClickedButtoncosx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("cos(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_COSX;
}


void CCalculatorDlg::OnBnClickedButtontanx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("tan(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle) / cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_TANX;
}


void CCalculatorDlg::OnBnClickedButtonlnx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("ln(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = log(mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LNX;
}


void CCalculatorDlg::OnBnClickedButtonedexcifang()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("e^") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(2.71828182845,mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_EX;
}


void CCalculatorDlg::OnBnClickedButtonkainfang()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_KAINFANG;
}


void CCalculatorDlg::OnBnClickedButtonNcifang()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_NFANG;
}


void CCalculatorDlg::OnBnClickedButtonmod()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_MOD;
}


void CCalculatorDlg::OnBnClickedButtonchu()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHU;
}


void CCalculatorDlg::OnBnClickedButtoncheng()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}


void CCalculatorDlg::OnBnClickedButtonjian()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}
