#include <stdio.h>
#include <stdlib.h>
main ()
{
    int voto = 0, candidatoX=0, candidatoY=0, candidatoZ=0, branco = 0, nulo = 0, total = 0;
    float percentual = 0;
    char opcao;

    do
    {
        printf ("1 - Candidato X\n");
        printf ("2 - Candidato Y\n");
        printf ("3 - Candidato Z\n");
        printf ("4 - Branco\n");
        printf ("5 - Nulo\n");
        printf ("6 - Imprimir relatorio de votos\n");
        printf ("7 - Sair\n");
        printf ("Por favor, digite o numero correspondente a sua opcao\n");
        scanf ("%d",  &voto);

        if (voto == 1)
        {
            printf ("Voce votou no Candidato X\n");
            candidatoX++;
        }
        else if (voto ==2)
        {
            printf ("Voce votou no Candidato Y \n");
            candidatoY++;
        }
        else if (voto ==3)
        {
            printf ("Voce votou no Candidato Z \n");
            candidatoZ++;
        }
        else if (voto ==4)
        {
            printf ("Voce votou em branco \n");
            branco++;
        }
        else if (voto ==5)
        {
            printf ("Voce votou nulo\n");
            nulo++;
        }


        else if (voto ==6)
        {
            do
            {
                printf ("Relatorio de votos\n");
                printf ("a - O numero de votos por candidato\n");
                printf ("b - A porcentagem de votos nulos\n");
                printf ("c - A porcentagem de votos brancos\n");
                printf ("d - O candidato vencedor\n");
                printf ("e - Voltar ao menu principal\n");
                printf ("Digite a opcao desejada \n");
                fflush (stdin);
                scanf ("%c", &opcao);
                if (opcao == 'a' || opcao == 'A')
                {
                    printf ("\nCandidatoX %d \nCandidatoY %d\nCandidatoZ %d", candidatoX, candidatoY, candidatoZ);
                }
                else if(opcao == 'b' || opcao == 'B')
                {
                    total = candidatoX + candidatoY + candidatoZ + branco + nulo;
                    percentual = (nulo * 100) / total;
                    printf("A porcentagem de nulo = %.2f\n", percentual);
                }
                else if(opcao == 'c' || opcao == 'C')
                {
                    total = candidatoX + candidatoY + candidatoZ + branco + nulo;
                    percentual = (branco * 100) / total;
                    printf("A porcentagem de branco = %.2f\n", percentual);
                }
                else if(opcao == 'd' || opcao == 'D')
                {
                    if (candidatoX > candidatoY && candidatoX > candidatoZ)
                    {
                        printf ("Candidato X ganhou a eleicao\n");
                    }
                    else if (candidatoY > candidatoX && candidatoY > candidatoZ)
                    {
                        printf ("Candidato Y ganhou a eleicao\n");
                    }
                    else if (candidatoZ > candidatoX && candidatoZ > candidatoY);
                    {
                        printf ("Candidato Z ganhou a eleicao\n");
                    }

                }

            }
            while (opcao != 'e' && opcao != 'E');

        }
        else if (voto ==7)
        {
            exit(0);
        }

        else
        {
            printf ("Voce nao digitou uma opcao valida \n");
        }

    }
    while (voto != 7);

}
