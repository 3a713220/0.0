#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	srand((int)time(0));
	int ComNum = 0;
	int YurNum = 0;
	int a = 0;
	int comwin = 0;
	int youwin = 0;
	int nobodywin = 0;

	while (a < 10) {
		ComNum = (int)(3.0 * rand() / (RAND_MAX + 1.0)); //�N rand ��ƩҲ��;�ư��H RAND_MAX + 1.0�A�N�i�H�o�� (0,1,2)
		printf("=====================================\n");
		printf("�ŤM,���Y,���Q�Գӭt\n");
		printf("�п�J�A���ﶵ(0:�ŤM,1:���Y,2:��):");
		scanf("%d", &YurNum);
		printf("�A��J���O:%d\n", YurNum);
		printf("�q����J���O:%d\n", ComNum);

		if (YurNum >= 10) {
			printf("�п�J0-2���Ʀr\n");
			continue;
		}
		if (YurNum == ComNum) {
			printf("����\n");
			nobodywin++;
			a++;
		}
		else if ((ComNum == 0 && YurNum == 2) || (ComNum == 1 && YurNum == 0) || (ComNum == 2 && YurNum == 1)) {
			printf("�q��Ĺ\n");
			comwin++;
			a++;
		}
		else if (YurNum > 2) {
			printf("��J���~");
			
		}
		else  {
			printf("�AĹ\n");
			youwin++;
			a++;
		}
		printf("=====================================\n");

	}
	printf("�q��Ĺ:%d��\n", comwin);
	printf("�AĹ:%d��\n", youwin);
	printf("����:%d��\n", nobodywin);
	while (a == 10) {
		if (youwin == comwin) {
			printf("�����Q�Գӭt�L�H���");
		}
		else if (youwin > comwin) {
			printf("�����Q�Գӭt���ߧA���");
		}
		if (youwin < comwin) {
			printf("�����Q�Գӭt���߹q�����");
		}
		break;

	}
	system("pause");
	return 0;
}
