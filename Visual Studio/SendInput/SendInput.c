#define WINVER 0x0500
#include <stdio.h>
#include <windows.h>

int BreakHan(wchar_t *str, wchar_t *buffer, UINT nSize);
int UnicodeToKey(char uni);

int main()
{
	INPUT ip;
	/*char str[30];
	char str2[60];
	int cnt = 0, size = 0;

	printf("���ڿ��� �Է��ϼ��� >> ");
	scanf("%s", str);
	size = BreakHan(str, str2, sizeof(str2)) - 1;*/


	printf("5\n");
	Sleep(1000);
	printf("4\n");
	Sleep(1000);
	printf("3\n");
	Sleep(1000);
	printf("2\n");
	Sleep(1000);
	printf("1\n");
	Sleep(1000);

	/*for (cnt = 0; cnt <= size; cnt++) {*/
		ip.type = INPUT_KEYBOARD;
		ip.ki.dwFlags = KEYEVENTF_SCANCODE;
		ip.ki.wScan = 0x1E;
		SendInput(1, &ip, sizeof(INPUT));
		ip.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
		SendInput(1, &ip, sizeof(INPUT));
	//}

	return 0;
}

int BreakHan(wchar_t *str, wchar_t *buffer, UINT nSize)
{
	//�ʼ� 
	static const wchar_t wcHead[] = { L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��' };

	//�߼� 
	static const wchar_t wcMid[] = { L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��', L'��' };

	//���� 
	static const wchar_t wcTail[] = { L' ', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��',
		L'��', L'��', L'��', L'��' };

	UINT    pos = 0;

	while (*str != '\0')
	{
		if (*str < 256)
		{
			if (pos + 2 >= nSize - 1)
				break;

			buffer[pos] = *str;
			++pos;
		}
		else
		{
			if (pos + 4 >= nSize - 1)
				break;

			buffer[pos] = wcHead[(*str - 0xAC00) / (21 * 28)];
			buffer[pos + 1] = wcMid[(*str - 0xAC00) % (21 * 28) / 28];
			buffer[pos + 2] = wcTail[(*str - 0xAC00) % 28];

			pos += 3;
		}

		++str;
	}

	buffer[pos] = '\0';
	return pos;
}