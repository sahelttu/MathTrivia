#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kertovaijako();
int jakokysymys();
int kertokysymys();
int main()
{
    int pisteet=0;
    int i=0;
    int tulos;
    int kysymys;
    srand(time(NULL));
    printf("Hey hey! Welcome to the Math Trivia!\nAnswer to 20 questions on multiplication and division.\nYour performance will be rated, so you'd better make it look good!\n");
    printf("***************************************************************************\n");
    do{
    kysymys=kertovaijako();//Kysymyksen arvonta.
        if(kysymys==0){
        tulos=jakokysymys();
            if (tulos==0){
            {
            pisteet++; //Kun pelaaja vastaa oikein, pisteet-muuttujan arvo nousee yhdell‰.
            }
            i++; //Olkoon vastaus oikein tai v‰‰rin, i:n arvo nousee. i kuvastaa pelin etenemist‰.
            }
            }
                else
                {
                tulos=kertokysymys();
                    if (tulos==0)
                    {
                    pisteet++;
                    }
                    i++;
                    }
    }while (i<11);
    printf("\nScore:%d\n", pisteet);



    switch(pisteet){ //Peli antaa k‰ytt‰j‰lle arvosanan joka perustuu pelin aikana ker‰ttyihin pisteisiin.

case 1 ... 3 :
    printf("Your grade: 1. I can't believe it! Was that your best? I don't think so!");
    break;
case 4 ... 7:
    printf("Your grade: 2. Too bad! Try again!");
    break;
case 8 ... 11:
    printf("Your grade: 3. Looking good. Keep it up!");
    break;
case 12 ... 15:
    printf("Your grade: 4. You can't stop now! Aim for the top grade!");
    break;
case 16 ... 20:
    printf("Your grade: 5. Congratulations! You're the math wizard!");
    break;
default:
    printf("You scored 0 points. C'mon, try harder!");
    break;
    return 0;

    }
    printf("\n*GAME OVER*\n");
    return 0;
}
int kertokysymys()
{
    int vastaus;
    int kerrottava=rand()% 100+2;
    int kertoja=rand()% 100+2;
    int tulo=0;
    printf("\n%d * %d=", kerrottava, kertoja);
    scanf("%d", &vastaus);
    tulo=kerrottava*kertoja;
    if (tulo==vastaus){
        printf("Correct!(+1)\n");
        return 0;
    }
        else{
        printf("Incorrect! Try again!\n"); //Pelaajan antaessa v‰‰t‰n vastauksen peli antaa toisen mahdollisuuden vastata.
        scanf("%d", &vastaus);
        if (tulo==vastaus){
            printf("Correct! (+1)\n");
        return 0;
        }else{
            printf("Incorrect! Next question:\n");
        return 1;
        }
    }
}
int jakokysymys()
{
    int vastaus;
    int jaettava=rand()% 100+2;
    int osamaara=rand()% 8+2;
    int jakaja=jaettava/osamaara;
    jakaja=jaettava*osamaara;

    printf("\n%d / %d=", jakaja, jaettava);
    scanf("%d", &vastaus);
    if (osamaara==vastaus)
    {
        printf("Correct!(+1) Next question:\n");
        return 0;
    }
    else
    {
        printf("Incorrect! Try again!\n");
        scanf("%d", &vastaus);
        if (osamaara==vastaus){
            printf("Correct! (+1)\n");
        return 0;
        }else{
            printf("Incorrect! Next question:\n");
        return 1;
        }
    }
}
int kertovaijako()
{
if (rand()%2==0)
{
return 0;
}else
{
return 1;
}
}
