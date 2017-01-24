#include <stdio.h>
#include <stdlib.h>
#include <vector>

int main(void){
	int val;
	std:: vector<int> v;
	std:: vector<int>::iterator iter;
	printf("Digite um valor inteiro: ");
	while(val != -1){
		scanf("%d", &val);
		v.push_back(val);
	}	
	for(iter = v.begin(); iter != v.end(); iter++)
		printf("%d\n", *iter);
	//Acesso com o operador randomico
	for(int i = 0; i < v.size(); i++)
		printf("%d\n", v[i]);
	return 0;
}
