#include<stdio.h>

void ler(float *p,int n){
	int i;
	
	for(i=0;i<n;i++){
		scanf("%f",p);
		p++;
	}
	
}

void imprimir(float *p,int n){
	int i;
	printf("Vetor : ");
	for(i=0;i<n;i++){
		printf("%.2f ",*p);
		p++;
	}
}

int main(){
    //int tabela[25] = {58, 60, 60, 62, 63, 80, 77, 70, 82, 62, 55, 76, 83, 50, 78, 79, 70, 60, 76, 83, 77, 60, 65, 71, 63 }, aux;
    int i,n,aux,j;
    printf("Digite o tamanho do vetor : "); 
    scanf("%d",&n);
    
	float vet[n],*d;
	ler(vet,n);
	d=vet;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(*d < *(d+j)){
                aux = *d;
                *d = *(d+j);
                *(d+j)= aux;
            }
        }
        d++;
    }
	
	imprimir(vet,n);
/*
    for(i=0; i<25; i++){
        printf("%d ", tabela[i]);

        if((i+1)%5 == 0){
            printf("\n");
        }
    }*/
return 0;
}
