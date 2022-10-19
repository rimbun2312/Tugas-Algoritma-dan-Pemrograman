#include <stdio.h>

float k,r,l,i,s,p,a,b,c,t;
const float phi = 3.14;


int main(){
    identitas();
    header();
    pilihan();
    eksekusi();

    return 0;
}
int identitas(){
	printf("========================================================= \n");
	printf("====                Program ini dibuat               ==== \n");
	printf("====                       oleh                      ==== \n");
	printf("====             Chrismana Rimbunta. N               ==== \n");
	printf("========================================================= \n\n\n");

	return 0;
}

int header(){
    printf("=======================================================\n");
    printf("===Program Menghitung Keliling dan Luas Bangun Datar===\n");
    printf("=======================================================\n");
    printf(" 1. Menghitung luas dan keliling persegi \n 2. Menghitung luas dan keliling persegi panjang \n 3. Menghitung luas dan keliling lingkaran\n 4. Menghitung luas dan keliling segitiga\n");

    return 0;
}

int pilihan(){
	printf("\nMasukkan pilihan : ");
    scanf("%f", &i);

    return 0;
}

int eksekusi(){

    if (i==1){

    luas_dan_keliling_persegi();
    printf("Luasnya adalah %.2f \n", l);
    printf("Kelilingnya adalah %.2f ", k);

    return 0;
    }

    else if (i==2){
    luas_dan_keliling_persegi_panjang();
    printf("Luasnya adalah %.2f \n", l);
    printf("Kelilingnya adalah %.2f ", k);

    return 0;
    }

    else if (i==3){
    luas_dan_keliling_lingkaran();
    printf("Luasnya adalah %.2f \n", l);
    printf("Kelilingnya adalah %.2f ", k);

    return 0;
    }

    else if (i==4){
    luas_dan_keliling_segitiga();
    printf("Luasnya adalah %.2f \n", l);
    printf("Kelilingnya adalah %.2f ", k);

    return 0;

    }
}


int luas_dan_keliling_persegi(){
    printf("=================================\n");
    printf("Program keliling dan luas persegi\n");
    printf("=================================\n");
    printf("Masukkan sisi : ");
        scanf("%f", &s);
    k=s+s+s+s;
    l=s*s;

    return 0;
}

int luas_dan_keliling_persegi_panjang(){
    printf("====================================================\n");
    printf("Program menghitung luas dan keliling persegi panjang\n");
    printf("====================================================\n");
    printf("Masukkan panjang: ");
        scanf("%f", &p);
    printf("Masukkan lebar : ");
        scanf("%f", &l);
    l=p*l;
    k=2*p+2*l;

    return 0;
}

int luas_dan_keliling_lingkaran(){
    printf("==============================================\n");
    printf("Program menghitung luas dan keliling lingkaran\n");
    printf("==============================================\n");
    printf("Masukkan jari-jari: ");
        scanf("%f", &r);
    l=phi*r*r;
    k=2*phi*r;

    return 0;
}

int luas_dan_keliling_segitiga(){
    printf("==============================================\n");
    printf("Program menghitung luas dan keliling segitiga\n");
    printf("==============================================\n");
    printf("Masukkan sisi bawah: ");
        scanf("%f", &a);
    printf("Masukkan sisi kiri: ");
        scanf("%f", &b);
    printf("Masukkan sisi kanan: ");
        scanf("%f", &c);
    printf("Masukkan tinggi: ");
        scanf("%f", &t);
    l=(a*t)/2;
    k=a+b+c;

    return 0;
}
