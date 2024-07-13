# Calendário

Projeto que formulei para tentar criar um tipo de agenda.
Aqui consta o início do meu projeto de uma agenda, por enquanto tudo que eu consigo é isto:

- Coloquei o calendário em forma de matriz.
- Um vetor com os dias que têm compromisso.
  - A princípio, ele é inicializado com 0.
  - Quando a pessoa marca um compromisso, ele recebe valor 1.

Adiante, quando o usuário termina de utilizar a agenda, o calendário é impresso novamente com os dias com compromisso na cor vermelha, sinalizando que contém compromisso. Vou procurar melhorar mais adiante, procuro também escrever este mesmo projeto em Java, pois é a linguagem que estou estudando agora. Muito obrigado por se interessar em ver meus códigos.

## Funcionalidades

- Determinação do número de dias em um mês.
- Geração de uma matriz representando o calendário do mês.
- Marcação de compromissos em dias específicos.
- Exibição do calendário com os dias de compromisso destacados em vermelho.

## Estrutura do Código

O código está estruturado em funções para facilitar a manutenção e a compreensão:

1. **quantidade_dias**: Determina a quantidade de dias em um mês específico.
2. **geraCalendario**: Gera a matriz do calendário com base no mês, ano e dia da semana de início.
3. **imprimiMatriz**: Imprime a matriz do calendário, destacando os dias com compromissos em vermelho.
4. **main**: Função principal que interage com o usuário, coleta dados e exibe o calendário.

## Uso

Para utilizar o programa, siga os passos abaixo:

1. Compile o código fonte.
2. Execute o programa.
3. Insira o dia da semana em que começa o mês.
4. Insira o mês (em número).
5. Insira o ano.
6. Adicione compromissos conforme solicitado pelo programa.
7. O calendário será exibido com os dias de compromisso destacados em vermelho.

## Exemplo de Execução

```shell
Olá, para iniciar seu calendário, por favor insira o dia da semana que começa o mês: 
[0=domingo][1=segunda][2=terça][3=quarta][4=quinta][5=sexta][6=sábado] 
1
Insira o mês: 
7
Insira o ano: 
2024
    D    S    T    Q    Q    S    S
    0    1    2    3    4    5    6
    7    8    9   10   11   12   13
   14   15   16   17   18   19   20
   21   22   23   24   25   26   27
   28   29   30   31    0    0    0
   0    0    0    0    0    0    0
Gostaria de adicionar algum compromisso? 
[sim][nao] 
sim
Insira o dia: 
10
Qual o compromisso que gostaria de marcar para este dia? 
Reunião com a equipe
Compromisso agendado com sucesso.
Gostaria de adicionar algo a mais? 
[sim][nao] 
nao
