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
//	//写文件
//	//....;
//	char ch;
//	for ( ch = 'a'; ch <= 'z'; ch++)
//	{
//		if (ch % 5 == 0) {
//			fputc('\n', stdout);
//		}
//		fputc(ch, stdout);
//	}
//	//c语言程序 运行起来默认打开三个流
//	//标准输入流 stdin
//	//标准输出流 stdout
//	//标准错误流 stderr
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

	//写文件
	//....;
	char ch;
	f

	fclose(pf);
	pf = NULL;
	return 0;
}