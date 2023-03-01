#include <stdio.h>
#include <stdlib.h>

int main(void){
    int angka,i,a,k,q,w,e,n;
    int pilihan,ganti,z;
printf("=================== \n");
printf("TUGAS QUIZ ASD \n");
printf("    1.Pilihan 1\n");
printf("    2.Pilihan 2 \n");
printf("    3.Pilihan 3 \n");
printf("    4.Exit \n");
printf("=================== \n");
scanf("%d", &pilihan);
switch(pilihan){
    case 1:
    system("cls");
    printf("Masukkan Angka: ");
    scanf("%d", &angka);

    printf("\n");

    for(i=0; i<=angka; i++){
        for(a=0; a<=i; a++){
            k++;
            printf("%3d",a+i);
        }
        printf("\n");
    }
    break;

    case 2:
        ulang2:
         system("cls");
         printf("Masukkan Angka: ");
    scanf("%d", &ganti);
    printf("\n");

        for(int i = 0; i<=ganti; i++) {
        for(int a = 1; a<=i; a++){
            k++;
               printf("%3d",i*a);
        }
        printf("\n");{
}
    }

    break;

    case 3:
        ulang3:


printf ("Program belah ketupat= \n");

printf ("Masukkan batas Nilai:  ");scanf("%d", &n);

for (q=1; q<=n; q++)

{         printf("\n");

for (e=1; e<=(n-q); e++)

{
printf(" ");
}
for (w=1; w<=q;w++)
{
printf("%d",w);
}
for (w=q-1; w>=1; w--)

{
printf("%d",w);
}
}
for (q=n-1; q>=1; q--)
{
printf("\n");

for (e=1; e<=(n-q); e++)

{

printf(" ");

}

for (w=1; w<=q;w++)

{
printf("%d",w);
}
for (w=q-1; w>=1; w--)

{

printf("%d",w);

}

}
 break ;
    case 4:
    ulang4:
        {
            exit(0);
        }
}
}
