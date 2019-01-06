#include<stdio.h>
#include<conio.h>
void getAGlobal()
{
    printf("Global Adalah %d alamatnya %p\n");
}
void fungsi (int a)
{
    a=a*3;
    printf("A By Value Adalah = %d alamatnya adalah %p\n",a,&a);
}
int main()
{
    int a=5;
    getAGlobal();
    printf("A Main Adalah =% alamat adalah %p\n",a,&a);
    (a);
    printf("A Main Setelah Fungsi Dipanggil Adalah = %d alamatnya adalah %p\n",a,&a);
    getch();
}
