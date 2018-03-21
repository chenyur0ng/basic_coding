//若一个字符串，求它的最短周期。
scanf("%s",str);
for(int i=1;i<=strlen(str);i++)if(strlen%i==0){
	int ok=0;
	//****
	for(int j=i;j<strlen(str);j++){
		if(str[j]!=str[j%i]){
			ok=0;
			break;
		}
	}
	//***
	if(ok){
		printf("%d\n",i);
	}		
}
