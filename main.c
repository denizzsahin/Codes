#include <stdio.h>
#include <stdlib.h>

int main()
{
    menu();
}

void menu(){

    int deger;

    printf("1- Asal Sayi Bulma\n");
    printf("2- En Kucuk Sayi Bulma\n");
    printf("3- Cikis\n");
    scanf("%d",&deger);

    while(deger!=1 || deger!=2 || deger!=3){
        if(deger!=1 && deger!=2 && deger!=3){
            printf("Hatali Giris\n");
            menu();
        }
        break;
    }
    if(deger==1){
        asalSayiBul();
    }
    else if(deger==2){
        enKucukBul();
    }
    else if(deger==3){
        return 0;
    }
}

void asalSayiBul(){
    int alt,ust;
    printf("Alt ve ust sinir giriniz: \n");
    scanf("%d\n%d",&alt,&ust);
    if((alt<2 && ust<2) || alt==ust){
        printf("Bu aralikta Asal sayi yoktur...\n");
        menu();
    }
    printf("Asal Sayilar: \n");
    if(alt==2){
        printf("%d\n",alt);
    }
    if(ust==2){
        printf("%d\n",ust);
    }
    int i=alt+1;
    while(i!=ust){
        if(alt>1 && ust>10) {
            while(i!=ust){
                if(i==2 || i==3 || i==5 || i==7 ){
                    printf("%d\n",i);
                }
                i++;
                if(i>10){
                   break;
                }
            }
        }
        while(i!=ust){
            if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%9!=0 ){
                printf("%d\n",i);
            }
            i++;
        }
    }
    menu();
}



void enKucukBul(){
    int s1,s2,s3;
    int enKucuk;
    printf("Sayilari giriniz: \n");
    scanf("%d\n%d\n%d",&s1,&s2,&s3);
    enKucuk=s1;
    if(s1>s2){
        enKucuk=s2;
    }
    else if(s1>s3){
        enKucuk=s3;
    }
    printf("En Kucuk Sayi: %d\n",enKucuk);
    menu();
}
