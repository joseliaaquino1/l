Q1- 

#include<stdio.h>
#include<math.h>

main(){
  
int num;
double ope, raiz;

printf("F(x) = 5x + 3 / Raiz(x^2 - 16)");
printf("\nDigite um valor para 'X':");
scanf("%d", &num);

ope = (( 5*num ) + 3);
num = pow (num,2);

raiz = ope / sqrt ( num - 16);
num = sqrt (num);

printf("A funcao do valor %d , é equivalente a: %.2f", num, raiz);
}


Q2-

#include<stdio.h>
#include<math.h>

main(){

int contador = 0;
float Altze = 1.10, Altchico = 1.50;

while(Altze <= Altchico){
    Altchico +=0.02;
    Altze += 0.03;
    contador ++;
}

printf("Zeca ficara maior que chico em %d anos!!", contador);
  
}

Q3-

#include<stdio.h>
#include<math.h>

main(){
    float a, b, c;
    
    printf("Digite os valores dos lados do triangulo (A, B, C, para definir sua classificacao:");
    scanf("%f %f %f", &a, &b, &c);
    
if (a < b + c && b < a + c && c < a + b){

    if (a == b && b == c) {

    printf("\nTriangulo equilatero.");

    } else if (a != b && b != c && c != a){

    printf("\nTriangulo escaleno.");

    } else {

    printf("\nTriangulo isosceles.");
    
    }

    } else {

    printf("\nNao equivale a um triangulo.");

    }
}

Q4-

#include<stdio.h>
#include<math.h>

main(){
float a, b, c;
    
printf("Digite os valores dos lados do triangulo (A, B, C): ");
scanf("%f %f %f", &a, &b, &c);
    
if (a < b + c && b < a + c && c < a + b) {

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {

    printf("\nTriangulo Retangulo.");

    } else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {

    printf("\nTriangulo Obtusangulo.");

    } else {

        printf("\nTriangulo Acutangulo.");

    }

    } else {

        printf("Nao equivale a um triangulo!!");
    }
    
}

Q5-

#include<stdio.h>
#include<math.h>

main(){

double x1, y1, x2, y2, valor;
    
    printf("Digite as coordenadas de p1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    getchar();


    printf("Digite as coordenadas de p2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    getchar();

    valor = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("A distancia entre os pontos p1 e p2 sao equivales a: %.4lf\n", valor);
    
}

Q6-

#include<stdio.h>
#include<math.h>

main(){

float X, Y;
    
printf("Defina um par ordenado (x,y): ");
scanf("%f %f", &X, &Y);
    
if (X == 0 && Y == 0) {
    printf("\nPonto de Origem (0,0)");

    } else if (X == 0) {
    printf("\nEixo Y - Ordenada ");

    } else if (Y == 0) {
    printf("\nEixo X - Abcissa");

    } else {
        if (X > 0){

            if (Y > 0) {

            printf("\nQuadrante 1 (Direita Superior)");

            } else {

            printf("\nQuadrante 2 (Esquerda Superior)");
            }

        } else {
            if (Y > 0) {

            printf("\nQuadrante 3 (Esquerda Inferior)");
            } else {

            printf("\nQuadrante 4 (Direita Inferior)");
            }
        }
    }

}

Q7-

#include<stdio.h>
#include<math.h>

main(){

int numAlunos = 30;
double notas[numAlunos];
double mediaGeral = 0.0;
    
for (int i = 0; i < numAlunos; i++) {
    double n1, n2, n3, media;

    printf("\nDigite as notas do aluno %d (A1, A2, A3): ", i + 1);
    scanf("%lf %lf %lf", &n1, &n2, &n3);
        
    media = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
    notas[i] = media;
        
    printf("Media do aluno %d: %.2lf\n", i + 1, media);
        
    if (media >= 7.0) {
            printf("\nAprovado.");
    } else {
            printf("\nReprovado.");
    }
        
    mediaGeral += media;

    }
    
    mediaGeral /= numAlunos;
    
    printf("\nMedia geral da turma: %.2lf", mediaGeral);

}

Q8-

#include<stdio.h>
#include<math.h>

main(){

float salario, mediaSalario = 0.0, maiorSalario = 0.0;
int numFilhos, totalPessoas = 0, totalSalarioAte100 = 0;
    
do {
    printf("\nInforme o salario - Valor Negativo para Encerrar: ");
    scanf("%f", &salario);
        
    if (salario >= 0) {

        printf("\nInforme o numero de filhos: ");
        scanf("%d", &numFilhos);
            
        mediaSalario += salario;
            
        if (salario <= 100.0) {
                totalSalarioAte100++;
        }
            
        if (salario > maiorSalario) {
                maiorSalario = salario;
        }
            
            totalPessoas++;
        }

    } while (salario >= 0);
    
    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
        
    printf("\nMedia do salario da populacao: %.2f", mediaSalario);
    printf("\nMaior salario: %.2f", maiorSalario);
    printf("\nPercentual de pessoas com salario ate R$100.00: %.2f%%", (float)totalSalarioAte100 / totalPessoas * 100);

    } else {
    printf("\nNenhum inserido.");
    }

}

Q9-

#include<stdio.h>
#include<math.h>

main(){

int candidato[4] = {0}; 
int votosNulos = 0;
int votosEmBranco = 0;
int codigoVoto;

while (1) {
        
printf("\nDigite o codigo do voto - 0 para encerrar: ");
scanf("%d", &codigoVoto);
        
    if (codigoVoto == 0) {
    break;
    }
        
switch (codigoVoto) {

case 1:
case 2:
case 3:
case 4:
candidato[codigoVoto - 1]++;
break;

case 5:
votosNulos++;
break;

case 6:
votosEmBranco++;
break;

default:
printf("\nCodigo de voto invalido.");
}

}
    
printf("\nTotal de votos para cada candidato:");

for (int i = 0; i < 4; i++) {

printf("\nCandidato %d: %d votos", i + 1, candidato[i]);
}
    
printf("\nTotal de votos nulos: %d", votosNulos);
printf("\nTotal de votos em branco: %d", votosEmBranco);
    

}

Q10-

#include<stdio.h>
#include<math.h>
#include <string.h>

main(){

int ddd;
int vei21, vei11, vei41, vei47, vei54;
int ac21, ac11, ac41, ac47, ac54;
int maior = 0, menor = 100;

char indiceMaior[50];
char indiceMenor[50];

int quanA = 0;
int acidentes;
int resp = 1;

do{
    quanA++;

printf("\nInforme seu codigo: \nRJ[21] \nSP[11] \nPR[41] \nSC[47] \nRS[54] \n-:");
scanf("%d", &ddd);

    if (ddd == 21){

        printf("\nQual a quantidade de veículos no RJ em 1992?:");
        scanf("%d", &vei21);
        printf("\nQual a quantidade de acidentes com vítimas?:");
        scanf("%d", &ac21);

            if(ac21 > maior) {
                maior = ac21;
                strcpy(indiceMaior, "RJ");
            }

            if(ac21 < menor) {
                menor = ac21;
                strcpy(indiceMenor, "RJ");
            }

        }
        else if (ddd == 11)
        {
        printf("\nQual a quantidade de veiculos em SP em 1992?:");
         scanf("%d", &vei11);

        printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac11);

            if(ac11 > maior) {
                maior = ac11;
                strcpy(indiceMaior, "SP");
            }

            if(ac11 < menor) {
                menor = ac11;
                strcpy(indiceMenor, "SP");
            }

        }
        else if (ddd == 41)
        {

        printf("\nQual a quantidade de veiculos no PR em 1992?:");
        scanf("%d", &vei41);

         printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac41);

            if(ac41 > maior) {
                maior = ac41;
                strcpy(indiceMaior, "PR");
            }

            if(ac41 < menor) {
                menor = ac41;
                strcpy(indiceMenor, "PR");
            }

        }
        else if (ddd == 47)
        {
        printf("\nQual a quantidade de veiculos em SC em 1992?:");
        scanf("%d", &vei47);

        printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac47);

            if(ac47 > maior) {
                maior = ac47;
                strcpy(indiceMaior, "SC");
            }

            if(ac47 < menor) {
                menor = ac47;
                strcpy(indiceMenor, "SC");
            }

        }
        else if (ddd == 54)
        {

        printf("\nQual a quantidade de veiculos no RS em 1992?:");
        scanf("%d", &vei54);

        printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac54);

            if(ac54 > maior) {
                maior = ac54;
                strcpy(indiceMaior, "RS");
            }

            if(ac21 < menor) {
                menor = ac54;
                strcpy(indiceMenor, "RS");
            }

        }

        printf("\nNovo registro? sim[1] / não[0]:");
        scanf("%d", &resp);

    } while (resp == 1);

float mediaV = (vei11+vei21+vei41+vei47+vei54)/5;
float mediaAcS = (ac54+ac47+ac41)/3;
    
printf("\nMaior indice de acidentes: %s com %d acidentes:", indiceMaior, maior);
printf("\nMenor indice de acidentes: %s com %d acidentes:", indiceMenor, menor);
printf("\nMédia de veículos nas ruas brasileiras: %.2f", mediaV);
printf("\nMédia de acidentes com vitima nas cidades do sul: %2.f", mediaAcS);

}

///FIM///
