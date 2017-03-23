#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include <string.h>
#define n 2

typedef struct
{
    int rok,mies,dzien;
} data;


int main()
{

struct DANE_OSOBOWE
    {
        char nazwisko[31];
        char imie[10];
        data data_ur;
        int wiek;
    } spis[n];

    data data_biez;
    int i;
    char litera;
    char *nazwisko[31];
    int wiek;

void zamien(char *x)        //musi być przed wprowadzanie które z niej korzysta
    {
        int j;
        x[0]=toupper(x[0]);
        j=1;
        while(isalpha(x[j]))
        {
            x[j]=tolower(x[j]);
            j++;
        }
    }

void wprowadzanie()         //jest 0
 {
    for(i=0; i<n; i++)
    {
        printf("\nPodaj nazwisko");
        scanf("%s",spis[i].nazwisko);
        zamien(spis[i].nazwisko);
        printf("\nPodaj imie");
        scanf("%s",spis[i].imie);
        zamien(spis[i].imie);
        printf("\nPodaj date urodzenia");
        printf("\nPodaj rok");
        scanf("%d",&spis[i].data_ur.rok);
        printf("\nPodaj miesiac");
        scanf("%d",&spis[i].data_ur.mies);
        printf("\nPodaj dzien");
        scanf("%d",&spis[i].data_ur.dzien);
        spis[i].wiek=data_biez.rok-spis[i].data_ur.rok;
    }
 }


void drukuj()                           //jest 1
    {
        int j;
        for (j=0; j<n; j++)
            printf("\n%s %s %d", spis[j].nazwisko, spis[j].imie, spis[j].wiek);
    }

void znajdz_i_wyswietl(char c)          //jest 2
    {
        int ilosc=0;

        c=toupper(c);
        for(i=0; i<n; i++)
        {
            if(spis[i].nazwisko[0]==c)
            {
                printf("\n%s %s %d",spis[i].nazwisko,spis[i].imie,spis[i].wiek );
                ilosc++;
        }
        if (ilosc==0) printf ("BRAK OSOBY NA LITERE %c",c);
    }
    }

void znajdz_i_wyswietl1(char *c[31])       //jest 3
    {
        int ilosc=0;
        zamien(c);
        c=toupper(c);
        for(i=0; i<n; i++)
        {
            if(strcmp(spis[i].nazwisko,c)==0)
            {
                printf("\n%s %s %d",spis[i].nazwisko,spis[i].imie,spis[i].wiek );
                ilosc++;
            }
        }
        if (ilosc==0) printf ("BRAK OSOBY %s",c);
    }

void znajdz_i_wyswietl2(int w)              //jest 4
    {
        int ilosc=0;
        for(i=0; i<n; i++)
        {
            if(spis[i].wiek==w)
            {
                printf("\n%s %s %d",spis[i].nazwisko,spis[i].imie,spis[i].wiek );
                ilosc++;
            }
        }
        if (ilosc==0) printf ("BRAK OSOBY O WIEKU %d",w);
    }

void sortuj()
    {
        struct DANE_OSOBOWE schowek;
        int j, zamiana=0;
        do
        {
            zamiana=1;
            for(j=0; j<n-1;j++)
            {
                if (spis[j].wiek>spis[j+1].wiek)
                {
                    schowek=spis[j];
                    spis[j]=spis[j+1];
                    spis[j+1]=schowek;
                    zamiana=0;
                }
            }
        } while(zamiana==0);
    }

system("cls");
void menu(void)
{
      int odp;

  do{

      printf("\n\t\t  Wybierz opcje");
      printf("\n\t0 - Wprowadz dane");
      printf("\n\t1 - Drukuj()");
      printf("\n\t2 - Znajdz po 1 literze nazwiska");
      printf("\n\t3 - Znajdz po nazwisku");
      printf("\n\t4 - Znajdz po wieku");
      printf("\n\t5 - KONIEC");
      scanf("%d",&odp);

    switch (odp)
    {
     case 0:
      {
        wprowadzanie();
        break;
      }
      case 1:
        {
            drukuj();
            break;
        }
      case 2:
        {
            printf("Podaj litere");
            fflush(stdin);
            scanf("%c",&litera);
            znajdz_i_wyswietl(litera);
            break;
        }
     case 3:
        {
            printf("Podaj nazwisko");
            scanf("%s",&nazwisko);
            znajdz_i_wyswietl1(nazwisko);
            break;
        }
       void zamien(char *x)
    {
        int j;
        x[0]=toupper(x[0]);
        j=1;
        while(isalpha(x[j]))
        {
            x[j]=tolower(x[j]);
            j++;
        }
    }  case 4:
        {
            printf("Podaj wiek");
            scanf("%d",&wiek);
            znajdz_i_wyswietl2(wiek);
            break;
        }
      case 5:
          {
              printf("\n KONIEC PROGRAMU");
              break;
          }
      default:
          {
              printf("Nie ma takiej opcji");
          }
      }
    }
while(odp!=5);
}
    data_biez.rok=2017;
    data_biez.mies=2;
    data_biez.dzien=21;

menu();

return 0;
}
