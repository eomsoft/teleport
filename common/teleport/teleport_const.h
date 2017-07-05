#ifndef __TELEPORT_CONST_H__
#define __TELEPORT_CONST_H__

// ���ļ��趨teleport����ģ��֮��ͨѶʱ�Ĵ���ֵ��JSON���ݣ���������
//  - WEB����������
//  - WEB������WEB��̨
//  - WEB��̨��CORE���ķ���

// �ɹ�
#define TPE_OK			0

//-------------------------------------------------------
// ͨ�ô���ֵ
//-------------------------------------------------------
#define TPE_NEED_MORE_DATA			1	// ��Ҫ�������ݣ���һ���Ǵ���
#define TPE_NEED_LOGIN				2	// ��Ҫ��¼
#define TPE_PRIVILEGE				3	// û�в���Ȩ��
#define TPE_EXISTS					8	// Ŀ���Ѿ�����
#define TPE_NOT_EXISTS              9   // Ŀ�겻����

// 100~299��ͨ�ô���ֵ

#define TPE_FAILED					100	// �ڲ�����
#define TPE_NETWORK					101	// �������
#define TPE_DATABASE				102 // ���ݿ����ʧ��

// HTTP������ش���
#define TPE_HTTP_METHOD				120	// ��Ч�����󷽷�������GET/POST�ȣ������ߴ�������󷽷���������ҪPOST��ȴʹ��GET��ʽ����
#define TPE_HTTP_URL_ENCODE			121	// URL��������޷����룩
//#define TPE_HTTP_URI				122	// ��Ч��URI

#define TPE_UNKNOWN_CMD				124	// δ֪������
#define TPE_JSON_FORMAT				125	// �����JSON��ʽ����ҪJSON��ʽ���ݣ�����ȴ�޷���JSON��ʽ���룩
#define TPE_PARAM					126	// ��������
#define TPE_DATA					127	// ���ݴ���

// #define TPE_OPENFILE_ERROR			0x1007	// �޷����ļ�
// #define TPE_GETTEMPPATH_ERROR		0x1007
#define TPE_OPENFILE				300


//-------------------------------------------------------
// WEB����ר�ô���ֵ
//-------------------------------------------------------
#define TPE_CAPTCHA_EXPIRED			10000	// ��֤���ѹ���
#define TPE_CAPTCHA_MISMATCH		10001	// ��֤�����
#define TPE_OATH_MISMATCH			10002	// �����֤����̬��֤�����
#define TPE_SYS_MAINTENANCE			10003	// ϵͳά����

#define TPE_USER_LOCKED				10100	// �û��Ѿ���������������δ������룩
#define TPE_USER_BAN				10101	// �û��Ѿ�������
#define TPE_USER_AUTH				10102	// �����֤ʧ��

//-------------------------------------------------------
// ���ֳ���ר�ô���ֵ
//-------------------------------------------------------
#define TPE_NO_ASSIST				100000	// δ�ܼ�⵽���ֳ���
#define TPE_OLD_ASSIST				100001	// ���ֳ���汾̫��
#define TPE_START_CLIENT			100002	// �޷������ͻ��˳����޷��������̣�



//-------------------------------------------------------
// ���ķ���ר�ô���ֵ
//-------------------------------------------------------
#define TPE_NO_CORE_SERVER			200000	// δ�ܼ�⵽���ķ���



#endif // __TELEPORT_CONST_H__
