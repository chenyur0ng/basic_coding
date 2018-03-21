/*
一个数组a[10]={0,1,0,1,1,0,0,1,1,1}
挑出非0的元素的标号，并且把他们输出在一行,并且用空格隔开
*/
#include<stdio.h>
int main(){
	int a[10]={0,1,0,1,1,0,0,1,1,1};
	int first=1;
	for(int i=0;i<10;i++){
		if(a[i]){
			if(first)first=0;
			else printf(" ");
			printf("%d",i);
		}
	}
	return 0;
}