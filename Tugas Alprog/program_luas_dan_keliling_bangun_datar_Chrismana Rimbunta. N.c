#include <stdio.h>

float k,r,l,i,s,p;
const float phi = 3.14;


int main(){
    identitas();
    header();
    pilihan();
    eksekusi();

}
void identitas(void){
	printf("========================================================= \n");
	printf("====                Program ini dibuat               ==== \n");
	printf("====                       oleh                      ==== \n");
	printf("====             Chrismana Rimbunta. N               ==== \n");
	printf("========================================================= \n\n\n\n\n");
}

void header(void){
    printf("=======================================================\n");
    printf("===Program Menghitung Keliling dan Luas Bangun Datar===\n");
    printf("=======================================================\n");
    printf(" 1. Menghitung luas dan keliling persegi \n 2. Menghitung luas dan keliling persegi panjang \n 3. Menghitung luas dan keliling lingkaran\n");

    }
void pilihan(void){
	printf("\nMasukkan pilihan : ");
    scanf("%f", &i);
}
void eksekusi(void){
	if (i==1){
		luas_dan_keliling_persegi();


        }

		else if (i==2){
		luas_dan_keliling_persegi_panjang();

		}

		else if (i==3){
		luas_dan_keliling_lingkaran();

		}

}


void luas_dan_keliling_persegi(float s, float l){
		printf("=================================\n");
		printf("Program keliling dan luas persegi\n");
		printf("=================================\n");
		printf("Masukkan sisi : ");
            scanf("%f", &s);
		k=s+s+s+s;
		l=s*s;
		printf("Luasnya adalah %.2f \n", l);
		printf("Kelilingnya adalah %.2f ", k);
}

void luas_dan_keliling_persegi_panjang(float p, float l){
		printf("====================================================\n");
		printf("Program menghitung luas dan keliling persegi panjang\n");
		printf("====================================================\n");
		printf("Masukkan panjang: ");
            scanf("%f", &p);
        printf("Masukkan lebar : ");
            scanf("%f", &l);
		l=p*l;
		k=2*p+2*l;
		printf("Luasnya adalah %.2f \n", l);
		printf("Kelilingnya adalah %.2f ", k);
}

void luas_dan_keliling_lingkaran(float r){
		printf("==============================================\n");
		printf("Program menghitung luas dan keliling lingkaran\n");
		printf("==============================================\n");
		printf("Masukkan jari-jari: ");
            scanf("%f", &r);
		l=phi*r*r;
		k=2*phi*r;
		printf("Luasnya adalah %.2f \n", l);
		printf("Kelilingnya adalah %.2f ", k);
}
