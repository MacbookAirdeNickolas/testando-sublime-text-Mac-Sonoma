#include<stdio.h>
#include<locale.h>
 		float calmetro3(float p,float l,float c){
 			float result;
 			result = p*l*c;//como se fosse a fórmula por isso nao tem as mesmas letras da conta original que tá no main
 			return result;
		 }
main(){
	float altura,largura,profundidade,valor_m3,resultado;
	setlocale(LC_ALL,"");
	printf("digite a altura da sua piscina (ATENÇÃO:APENAS NÚMEROS)");
	scanf("%f",&altura);
	printf("digite a largura da sua piscina (ATENÇÃO:APENAS NÚMEROS)");
	scanf("%f",&largura);
	printf("digite a profundidade da sua piscina (ATENÇÃO:APENAS NÚMEROS)");
	scanf("%f",&profundidade);
	printf("digite o valor do metro cúbico (ATENÇÃO:APENAS NÚMEROS)");
	scanf("%f",&valor_m3);
	resultado=calmetro3(profundidade,largura,altura);//ele vai pegar a "formula" lá em cima e substituir os valores
	printf("valor=%.2f",resultado);
	getch();
	
}
