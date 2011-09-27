// VideoCaptureTestDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once

#include "VideoCapture.h"
#include "afxwin.h"


// CVideoCaptureTestDlg �_�C�A���O
class CVideoCaptureTestDlg : public CDialog
{
// �R���X�g���N�V����
public:
	CVideoCaptureTestDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^

// �_�C�A���O �f�[�^
	enum { IDD = IDD_VIDEOCAPTURETEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	CVideoCapture *m_pVideoCapture;

	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_Picture1;
};
