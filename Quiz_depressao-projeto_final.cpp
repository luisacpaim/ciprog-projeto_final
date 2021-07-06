/*Programa destinado a avaliação e a classificação da depressão. Deve ser utilizado para facilitar o diagnostico  por profissionais da saude especializados em saude mental. Resultado: Mínimo (0 – 11) Leve   (12 – 19) Moderado (20 – 35) Grave (36 – 63)*/

#include <iostream>
#include <string> 
using namespace std;

int main() {       
  
string nome;
int resposta[21],resultado,contador,teste;


//Apresentação do programa

 cout << "\n A depressão é uma doença silenciosa e muitas vezes incompreendida.\n Nesse sentido, esse programa foi desenvolvido para facilitar a avaliação e classificação da depressão para fins de posterior confirmação, diagnóstico e tratamento.\n";

cout <<" \n  Vamos começar! Qual seu nome? ";
getline(cin,nome);

do {  //Executar as questões

//Explicando as questões
  
  cout << endl << nome << ", este questionário consiste em 21 questões. \nDepois de ler cuidadosamente cada pergunta, digite o número correspondente (0, 1, 2 ou 3) à afirmação, em cada grupo, que descreve melhor a maneira que você tem se sentido na última semana, incluindo hoje. \nTenha cuidado de ler todas as afirmações, em cada grupo, antes de fazer sua escolha." << endl; 
  
  resultado = 0; //declarado aqui para limpar a variável em caso de repetição do quiz (opção 1), estava somando com os valores anteriores
 
  //Questões
    do{ //Questão 1

      cout << endl << "Questão 1 - Em relação à tristeza:\n 0  Não me sinto triste\n 1  Eu me sinto triste\n 2  Estou sempre triste e não consigo sair disto \n 3  Estou tão triste ou infeliz que não consigo suportar \n RESPOSTA: ";
      cin >> resposta[0];

        if ((resposta[0] < 0) || (resposta[0] > 3)) { cout << "\nResposta inválida.\n"; } 
      
    } while((resposta[0] < 0) || (resposta[0] > 3)); //É outra mais simples, que diminui o código e faz a mesma coisa

    
    do{ //Questão 2
      
      cout << endl << "Questão 2 - Em relação ao pessimismo: \n 0  Não estou especialmente desanimado quanto ao futuro  \n 1  Eu me sinto desanimado quanto ao futuro\n 2  Acho que nada tenho a esperar\n 3  Acho o futuro sem esperanças e tenho a impressão de que as coisas não podem melhorar\n RESPOSTA: ";
      cin >> resposta [1];

       if ((resposta[1] < 0) || (resposta[1] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[1] < 0) || (resposta[1] > 3));
    
    
    do{ //Questão 3

      cout << endl << "Questão 3 - Em relação à sensação de fracasso:\n 0  Não me sinto um fracasso\n 1  Acho que fracassei mais do que uma pessoa comum\n 2  Quando olho pra trás, na minha vida, tudo o que posso ver é um monte de fracassos\n 3  Acho que, como pessoa, sou um completo fracasso\n RESPOSTA: ";
      cin >> resposta [2];
      
       if ((resposta[2] < 0) || (resposta[2] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[2] < 0) || (resposta[2] > 3));


    do{ //Questão 4

      cout << endl << "Questão 4 - Quanto ao sentimento de satisfação:\n 0  Tenho tanto prazer em tudo como antes\n 1  Não sinto mais prazer nas coisas como antes\n 2  Não encontro um prazer real em mais nada\n 3  Estou insatisfeito ou aborrecido com tudo\n RESPOSTA: ";
      cin >> resposta [3];
      
      if ((resposta[3] < 0) || (resposta[3] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[3] < 0) || (resposta[3] > 3));

    do{ //Questão 5

      cout << endl << "Questão 5 - Quanto ao sentimento de culpa:\n 0  Não me sinto especialmente culpado\n 1  Eu me sinto culpado grande parte do tempo\n 2  Eu me sinto culpado na maior parte do tempo\n 3  Eu me sinto sempre culpado\n RESPOSTA: ";
      cin >> resposta [4];
     
      if ((resposta[4] < 0) || (resposta[4] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[4] < 0) || (resposta[4] > 3));
    
    do{ //Questão 6

      cout << endl << "Questão 6 - Quanto à sensação de punição:\n 0  Não acho que esteja sendo punido\n 1  Acho que posso ser punido\n 2  Creio que vou ser punido\n 3  Acho que estou sendo punido\n RESPOSTA: ";
      cin >> resposta [5];
      
      if ((resposta[5] < 0) || (resposta[5] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[5] < 0) || (resposta[5] > 3));

    do{ //Questão 7

      cout << endl << "Questão 7 - Em relação ao sentimento de auto desgosto:\n 0  Não me sinto decepcionado comigo mesmo\n 1  Estou decepcionado comigo mesmo\n 2  Estou enojado de mim\n 3  Eu me odeio\n RESPOSTA: ";
      cin >> resposta [6];
      
      if ((resposta[6] < 0) || (resposta[6] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[6] < 0) || (resposta[6] > 3));

    do{ //Questão 8

      cout << endl << "Questão 8 - Em relação à autoestima: \n 0  Não me sinto de qualquer modo pior que os outros \n 1  Sou crítico em relação a mim por minhas fraquezas ou erros \n 2  Eu me culpo sempre por minhas falhas \n 3  Eu me culpo por tudo de mal que acontece \n RESPOSTA: ";
      cin >> resposta [7];
      
        if ((resposta[7] < 0) || (resposta[7] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[7] < 0) || (resposta[7] > 3));

    do{ //Questão 9

      cout << endl << "Questão 9 - Em relação a ideias suicidas: \n 0  Não tenho quaisquer ideias de me matar \n 1  Tenho ideias de me matar, mas não as executaria \n 2  Gostaria de me matar \n 3  Eu me mataria se tivesse oportunidade \n RESPOSTA: ";
      cin >> resposta [8];
      
      if ((resposta[8] < 0) || (resposta[8] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[8] < 0) || (resposta[8] > 3));

    do{ //Questão 10

      cout << endl << "Questão 10 - Em relação ao choro: \n 0  Não choro mais que o habitual \n 1  Choro mais agora do que costumava \n 2  Agora, choro o tempo todo \n 3  Costumava ser capaz de chorar, mas agora não consigo, mesmo que o queria \n RESPOSTA: ";
      cin >> resposta [9];
      
       if ((resposta[9] < 0) || (resposta[9] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[9] < 0) || (resposta[9] > 3));


    do{ //Questão 11

      cout << endl << "Questão 11 - Em relação a irritação: \n 0  Não sou mais irritado agora do que já fui \n 1  Fico aborrecido ou irritado mais facilmente do que costumava \n 2  Agora, eu me sinto irritado o tempo todo \n 3  Não me irrito mais com coisas que costumavam me irritar \n RESPOSTA: ";
      cin >> resposta [10];
      
       if ((resposta[10] < 0) || (resposta[10] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[10] < 0) || (resposta[10] > 3));


    do{ //Questão 12

      cout << endl << "Questão 12 - Em relação à interação social: \n 0  Não perdi o interesse pelas outras pessoas \n 1  Estou menos interessado pelas outras pessoas do que costumava estar \n 2  Perdi a maior parte do meu interesse pelas outras pessoas \n 3  Perdi todo o interesse pelas outras pessoas \n RESPOSTA: ";
      cin >> resposta [11];
     
       if ((resposta[11] < 0) || (resposta[11] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[11] < 0) || (resposta[11] > 3));

      
    do{ //Questão 13

      cout << endl << "Questão 13 - Em relação a indecisão: \n 0  Tomo decisões tão bem quanto antes \n 1  Adio as tomadas de decisões mais do que costumava \n 2  Tenho mais dificuldades de tomar decisões do que antes \n 3  Absolutamente não consigo mais tomar decisões \n RESPOSTA: ";
      cin >> resposta [12];
     
       if ((resposta[12] < 0) || (resposta[12] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[12] < 0) || (resposta[12] > 3));

      
    do{ //Questão 14

      cout << endl << "Questão 14 - Em relação a autopercepção de sua aparência: \n 0  Não acho que de qualquer modo pareço pior do que antes \n 1  Estou preocupado em estar parecendo velho ou sem atrativo \n 2  Acho que há mudanças permanentes na minha aparência, que me fazem parecer sem atrativo \n 3  Acredito que pareço feio \n RESPOSTA: ";
      cin >> resposta [13];
      
       if ((resposta[13] < 0) || (resposta[13] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[13] < 0) || (resposta[13] > 3));


    do{ //Questão 15

      cout << endl << "Questão 15 - Em relação ao trabalho: \n 0  Posso trabalhar tão bem quanto antes \n 1  É preciso algum esforço extra para fazer alguma coisa \n 2  Tenho que me esforçar muito para fazer alguma coisa \n 3  Não consigo mais fazer qualquer trabalho \n RESPOSTA: ";
      cin >> resposta [14];
     
       if ((resposta[14] < 0) || (resposta[14] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[14] < 0) || (resposta[14] > 3));


    do{ //Questão 16

      cout << endl << "Questão 16 - Em relação à insônia: \n 0  Consigo dormir tão bem como o habitual \n 1  Não durmo tão bem como costumava \n 2  Acordo 1 a 2 horas mais cedo do que habitualmente e acho difícil voltar a dormir \n 3  Acordo várias horas mais cedo do que costumava e não consigo voltar a dormir \n RESPOSTA: ";
      cin >> resposta [15];
      
       if ((resposta[15] < 0) || (resposta[15] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[15] < 0) || (resposta[15] > 3));


    do{ //Questão 17

      cout << endl << "Questão 17 - Em relação ao cansaço: \n 0  Não fico mais cansado do que o habitual \n 1  Fico cansado mais facilmente do que costumava \n 2  Fico cansado em fazer qualquer coisa \n 3  Estou cansado demais para fazer qualquer coisa \n RESPOSTA: ";
      cin >> resposta [16];
      
       if ((resposta[16] < 0) || (resposta[16] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[16] < 0) || (resposta[16] > 3));


    do{ //Questão 18

      cout << endl << "Questão 18 - Em relação ao apetite: \n 0  O meu apetite não está pior do que o habitual \n 1  Meu apetite não é tão bom como costumava ser \n 2  Meu apetite é muito pior agora \n 3  Absolutamente não tenho mais apetite \n RESPOSTA: ";
      cin >> resposta [17];
      
       if ((resposta[17] < 0) || (resposta[17] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[17] < 0) || (resposta[17] > 3));


    do{ //Questão 19

      cout << endl << "Questão 19 - Em relação ao peso: \n 0  Não tenho perdido muito peso se é que perdi algum recentemente \n 1  Perdi mais do que 2 quilos e meio \n 2  Perdi mais do que 5 quilos \n 3  Perdi mais do que 7 quilos \n RESPOSTA: ";
      cin >> resposta [18];
      
       if ((resposta[18] < 0) || (resposta[18] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[18] < 0) || (resposta[18] > 3));


    do{ //Questão 20

      cout << endl << "Questão 20 - Em relação à sua saúde física: \n 0  Não estou mais preocupado com a minha saúde do que o habitual \n 1  Estou preocupado com problemas físicos, tais como dores, indisposição do estômago ou constipação \n 2  Estou muito preocupado com problemas físicos e é difícil pensar em outra coisa \n 3  Estou tão preocupado com meus problemas físicos que não consigo pensar em qualquer outra coisa \n RESPOSTA: ";
      cin >> resposta [19];
    
       if ((resposta[19] < 0) || (resposta[19] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[19] < 0) || (resposta[19] > 3));


    do{ //Questão 21

      cout << endl << "Questão 21 - Em relação ao seu interesse sexual: \n 0  Não notei qualquer mudança recente no meu interesse por sexo \n 1  Estou menos interessado por sexo do que costumava \n 2  Estou muito menos interessado por sexo agora \n 3  Perdi completamente o interesse por sexo \n RESPOSTA: ";
      cin >> resposta [20]; 
     
        if ((resposta[20] < 0) || (resposta[20] > 3)) { cout << "\nResposta inválida.\n"; }

    } while((resposta[20] < 0) || (resposta[20] > 3));


        //Somar as respostas
        for (contador = 0; contador < 21; contador++) { 
            
            resultado = resultado + resposta[contador];

          }

                 
        // Resultado
          cout << "\n\nResultado: Mínimo (0 – 11), Leve (12 – 19), Moderado (20 – 35), Grave (36 – 63)." << endl << "\nSua pontuação foi: " << resultado << ".";

            //emitir o resultado/"diagnóstico"
          if (resultado >= 0 && resultado <= 11) {

            cout << "\n --> " << nome << ", você não apresenta um quadro de depressão.";

          } else if (resultado >= 12 && resultado <= 19) {

            cout << "\n --> " << nome << ", você apresenta um quadro leve de depressão.";

          } else if (resultado >= 20 && resultado <= 35) {

            cout << "\n --> " << nome << ", você apresenta um quadro moderado de depressão.";

          } else if (resultado >= 36 && resultado <= 63) {
            cout << "\n --> " << nome << ", você apresenta um quadro grave de depressão.";

          }

//Opções menu
  cout << endl << "\nSe deseja responder novamente o questionário, digite 1; \nSe deseja acessar a lista de locais que oferecem atendimento psicológico gratuito em Salvador, digite 2; \nPara Finalizar, digite 0. \nOpção:  "; //troquei a opção de sair por 0 para dar default e não repetir a fonte
  cin >> teste;
  cout << "\n//\n";
  
    
    switch (teste) { //incluindo outras opções/interações

      case 1: //para não dar default
      
          teste = 1;
          break;

      case 2:  //para exibir a lista de locais de atendimento
          cout << endl << "Atendimento Psicológico gratuito em Salvador: ";

          cout << endl << "\nNome: Ambulatório do Luto; \nPúblico: Pessoas em situação de luto \nEndereço: Ambulatório Magalhães Neto - Canela \nTelefone: (71) 99169 - 5811 | (71) 98806 - 0927";

          cout << endl << "\nNome: CECOM - Centro Comunitário Batista Clériston Andrade \nPúblico: Todos os públicos \nEndereço: Rua Lord Cochrane,Garibaldi \nTelefone: (71) 3194-777";

          cout << endl << "\nNome: Clínica Escola da Escola Bahiana de Medicina e Saúde Pública \nPúblico: Todos os públicos \nEndereço: Av. Dom João VI Nº 275, Brotas \nTelefone: (71) 3276-8259";

          cout << endl << "\nNome: Clínica Escola de Psicologia da UFBA \nPúblico: Todos os públicos \nEndereço: Estrada de São Lázaro,  Nº 170, São Lázaro \nTelefone: (71) 3235-4589";

          cout << endl << "\nNome: Clínica Escola da UNIJORGE  \nPúblico: Todos os públicos \nEndereço: Av. Luís Viana Filho, Nº 6775, Paralela \nTelefone: (71) 3206-8489 ";

          cout << endl << "\nNome: CVV - Centro de Valorização da Vida\nPúblico: Maiores de 18 anos \nEndereço: Rua do Bángala, nº 47/99, Nazaré, telefone 188 \nTelefone: (71) 3273-9561, (71) 3271-8119 ";

          cout << endl << "\nNome: Clínica Escola Faculdade Ruy Barbosa - DeVry \nPúblico: Todos os públicos  \nEndereço: Rua Theodomiro Batista, Nº 422, Rio Vermelho \nTelefone: (71) 3205-1745";

          cout << endl << "\nNome: Projeto Banzo (Espaço de saúde mental e inclusão social) \nPúblico: População negra e pessoas em situação de vulnerabilidade \nEndereço: Praça da Juventude da Fazenda Grande do Retiro, R. Melo Morais Filho \nTelefone: (71) 98822-5098 ";

          cout << endl << "\nNome: Psiu UFBA \nPúblico: Todos os públicos \nEndereço: Sede da PROAE, Rua Caetano Moura, 140 Federação \nTelefone: (71) 99911-2828";

          cout << endl << "\nNome: Serviço de Psicologia da Uneb \nPúblico: Todos os públicos \nEndereço: Rua Silveira Martins, nº 2555, Cabula. Prédio anexo ao Departamento de Educação \nTelefone: (71) 3117-5336 | (71) 3117-5341";
          

        cout << endl << "\nSe deseja responder novamente o questionário, digite 1; \nPara finalizar, digite 3. \nOpção: ";
        cin >> teste;
        cout << "\n//\n";
        break;

      default:  

        cout << endl << "O Inventário de Depressão de Beck - BDI foi desenvolvida por criada por Aaron Beck. Retirado do site do Instituto de Ciência, Tecnologia e Qualidade (Disponível em: https://www.ictq.com.br/varejo-farmaceutico/915-atencao-farmaceutica-em-psicofarmacos). \nPrograma finalizado!";
        
    }
    

} while (teste == 1); //para repetir o questionário

   if (teste == 3) { //para finalizar dentro do case 2
        
        cout << endl << "O Inventário de Depressão de Beck - BDI foi desenvolvida por criada por Aaron Beck. Retirado do site do Instituto de Ciência, Tecnologia e Qualidade (Disponível em: https://www.ictq.com.br/varejo-farmaceutico/915-atencao-farmaceutica-em-psicofarmacos). \nPrograma finalizado!";

      }

return 0;

}
