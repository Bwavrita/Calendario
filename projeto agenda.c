#define n 6
#include <stdio.h>
#include <string.h>
#include <conio.h>

// Função para determinar a quantidade de dias em um mês
int quantidade_dias(int m, int a) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        return 31;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    } else if (m == 2 && a % 4 == 0) {
        return 29;
    } else {
        return 28;
    }
}

// Função para gerar a matriz do calendário
void geraCalendario(int mat[6][7], int ds, int m, int a) {
    int i, j, totaldias, dias = 1;
    
    totaldias = quantidade_dias(m, a);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 7; j++) { 
            if (dias > totaldias) {
                mat[i][j] = 0;  
            } else if (i == 0 && j < ds) {
                mat[i][j] = 0;  
            } else {
                mat[i][j] = dias;  
                dias++;
            }
        }
    }
}

// Função para imprimir a matriz do calendário
void imprimiMatriz(int m[n][7], int d[32]) {  
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 7; j++) {
            if (d[m[i][j]] == 1) {
                printf("\x1b[31m% 5d\x1b[0m", m[i][j]);
            }
            else{
            printf("%5d", m[i][j]);}
        }
        printf("\n");
    }
}

int main() {
    int cal[6][7];
    char resposta[10];
    int ds, m, a;
    char compromisso[50];
    char atividade[32][50];
    int compromisso_dia[32] = {0};
    int dia;
    int t = 0;
    
    printf("Olá, para iniciar seu calendário, por favor insira o dia da semana que começa o mês: \n");
    printf("[0=domingo][1=segunda][2=terça][3=quarta][4=quinta][5=sexta][6=sábado] \n");
    scanf("%d", &ds);
    printf("Insira o mês: \n");
    scanf("%d", &m);
    printf("Insira o ano: \n");
    scanf("%d", &a);
    
    geraCalendario(cal, ds, m, a);
    printf("    D    S    T    Q    Q    S    S\n");
    imprimiMatriz(cal, compromisso_dia);
    
    for (int i = 1; i <= quantidade_dias(m, a); i++) {
        printf("Gostaria de adicionar algum compromisso? \n");
        printf("[sim][nao] \n");
        scanf("%9s", resposta);
        if (strcmp(resposta, "sim") == 0) {
            do {
                
                printf("Insira o dia: \n");
                scanf("%d", &dia);
                getchar();
                compromisso_dia[dia] = 1;
                if (dia <= 0 || dia > quantidade_dias(m, a)) {
                    printf("Número inválido \n");
                    t = 1;
                } else {
                    printf("Qual o compromisso que gostaria de marcar para este dia? \n");
        fgets(compromisso, sizeof(compromisso), stdin);

        compromisso[strcspn(compromisso, "\n")] = '\0';

        strcpy(atividade[dia], compromisso);
        printf("Compromisso agendado com sucesso.\n");
                }
            } while (t == 1);
        } else {
            break;
        }
    
        printf("Gostaria de adicionar algo a mais? \n [sim][nao] \n");
        scanf("%9s",resposta);
        if(strcmp(resposta,"sim")==0){t=0;}
        else {break;}
    }
            imprimiMatriz(cal,compromisso_dia);
            for(int i=0;i<quantidade_dias(m,a)+1;i++){
                if(compromisso_dia[i]!=0){
                printf("Você tem compromisso no dia %d \n Seu compromisso é %s \n ",i,compromisso);
            }
        }
        
        
    
    return 0;
}






