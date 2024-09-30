//几几乘法表
#include<stdio.h>
int main(int argc, char** argv) {
	int i = 1,j=1;
	int JJ;
	int TIMES = 1;
	printf("请输入你想要的几几乘法表（输入单个非零自然数数字,千万不要不听劝哦~~~）：");
	scanf_s("%d", &JJ);
	while (JJ <= 0 || !int(JJ)) {
		printf("请重新输入正确的数字(生气*%d)：",TIMES);
		TIMES++;
		scanf_s("%d", &JJ);
		if (TIMES == 3) {
			printf("我真的要生气了。");
		}
		if (TIMES == 5) {
			printf("我生气了！！！");
		}
		if (TIMES == 10) {
			printf("小毕登不听劝是吧？！好的，既然这样，你的牛牛减少10cm!");
		}
		if (10<TIMES<=25) {
			printf("你的牛牛减少%dcm!", TIMES);
		}
		if (TIMES > 25) {
			printf("你的牛牛没了！");
			printf("/n程序结束！");
			break;
		}
	}
	if(JJ>0&&int(JJ)){
		for (i = 1; i < JJ+1; i++) {
			for (j = 1; j <= i; j++) {
				printf("%d*%d=%d ", j, i, i * j);
			}
			printf("\n");
		}
	}
}