#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main() {
//	FILE* pf = fopen("data.txt", "w");
//
//	if (pf == NULL) {
//		perror(fopen);
//		return 1;
//	}
//
//	//д�ļ�
//	//....;
//	char ch;
//	for ( ch = 'a'; ch <= 'z'; ch++)
//	{
//		if (ch % 5 == 0) {
//			fputc('\n', stdout);
//		}
//		fputc(ch, stdout);
//	}
//	//c���Գ��� ��������Ĭ�ϴ�������
//	//��׼������ stdin
//	//��׼����� stdout
//	//��׼������ stderr
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

int main() {
	FILE* pf = fopen("data.txt", "w");

	if (pf == NULL) {
		perror(fopen);
		return 1;
	}

	//д�ļ�
	//....;
	char ch;
	f

	fclose(pf);
	pf = NULL;
	return 0;
}