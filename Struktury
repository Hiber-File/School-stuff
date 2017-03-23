#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define n 2
int main()
    {
        struct dane_osobowe
        {
            char imie[20],nazwisko[20];
            int wiek;
        } osoba[n];

        int i;
        char znak;

        float srednia()
        {
            int j,suma=0;
            for(j=0;j<n;j++)
            {
                suma=suma+osoba[j].wiek;
            }
            return (float)suma/n;
        }
        int najstarsza()
        {
            int j,j_max=0;
            for(j=0;j<n;j++)
            {
                if(osoba[j].wiek>osoba[j_max].wiek)
                {
                    j_max=j;
                }
            }
            return j_max;
        }
        int najmlodsza()
        {
            int j,j_min=0;
            for(j=0;j<n;j++)
            {
                if(osoba[j].wiek<osoba[j_min].wiek)
                {
                    j_min=j;
                }
            }
            return j_min;
        }
        void zamien(char *x)
        {
            int j;
            x[0]=toupper(x[0]);
            j=1;
            while (isalpha(x[j]))
            {
                x[j]=tolower(x[j]);
                j++;
            }
        }
        void znajdz_i_wyswietl(char c)
        {
            znak=toupper(znak);
            for(i=0;i<n;i++)
            {
                int ile=0;
                if(znak==osoba[i].nazwisko[0])
                {
                    ile++;
                    printf("\n%s   %s   %d",osoba[i].nazwisko,osoba[i].imie,osoba[i].wiek);
                }
                if(ile==0)
                {
                    printf("\nNie ma osob na taka litere");
                }
            }

        }
        for(i=0;i<n;i++)
        {
            printf("\nPodaj nazwisko ");
            scanf("%s",osoba[i].nazwisko);
            zamien(osoba[i].nazwisko);
            printf("\nPodaj imie ");
            scanf("%s",osoba[i].imie);
            zamien(osoba[i].imie);
            printf("\nPodaj wiek ");
            scanf("%d",&osoba[i].wiek);
        }
        for(i=0;i<n;i++)
        {
            printf("\nNazwisko: %s",osoba[i].nazwisko);
            printf("\nImie: %s",osoba[i].imie);
            printf("\nWiek: %d",osoba[i].wiek);
        }
        printf("\nSredni wiek osob to %f",srednia());
        printf("\nOsoba najstarsza to %s",osoba[najstarsza()].imie);
        printf("\nOsoba najmlodsza to %s",osoba[najmlodsza()].imie);
        printf("\nPodaj pierwsza litere nazwiska:");
        fflush(stdin);
        scanf("%c",&znak);
        znajdz_i_wyswietl(znak);
    return 0;
    }
