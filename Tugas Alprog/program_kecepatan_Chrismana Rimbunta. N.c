#include <stdio.h>
float v,s,t,i;


int main(){
	identitas();
	pilihan_menu();
	input_pil();
	eksekusi();

}

void identitas(void){
	printf("========================================================= \n");
	printf("====                Program ini dibuat               ==== \n");
	printf("====                       oleh                      ==== \n");
	printf("====             Chrismana Rimbunta. N               ==== \n");
	printf("========================================================= \n\n\n\n\n");
}

void pilihan_menu(void){
    printf("======================================================== \n");
    printf("=====Program menghitung kecepatan, waktu,dan jarak ===== \n");
    printf("========================================================= \n");
    printf(" 1. Menghitung kecepatan \n 2. Menghitung waktu \n 3. Menghitung jarak\n");
}

void input_pil(void){
	printf("\nMasukkan pilihan : ");
        scanf("%f", &i);

}
void eksekusi(void){
	if (i==1){
		program_kecepatan();


        }

		else if (i==2){
		program_waktu();

		}

		else if (i==3){
		program_jarak();

		}

}
void program_kecepatan(float s, float t){
		printf("============================\n");
		printf("Program menghitung kecepatan\n");
		printf("============================\n");
		printf("Masukkan jarak (m): ");
            scanf("%f", &s);
        printf("Masukkan waktu (s): ");
            scanf("%f", &t);
		v=s/t;
		printf("Kecepatannya adalah %.2f m/s", v);
}
void program_waktu(float s, float v){
		printf("========================\n");
		printf("Program menghitung waktu\n");
		printf("========================\n");
		printf("Masukkan jarak (m): ");
            scanf("%f", &s);
        printf("Masukkan kecepatan (m/s) : ");
            scanf("%f", &v);
		t=s/v;
		printf("Waktunya adalah %.2f s", t);
}
void program_jarak(float v, float s){
		printf("========================\n");
		printf("Program menghitung jarak\n");
		printf("========================\n");
		printf("Masukkan waktu (s): ");
            scanf("%f", &t);
		printf("Masukkan kecepatan (m/s): ");
            scanf("%f", &v);
		s=v*t;
		printf("Jaraknya adalah %.2f m", s);
}
