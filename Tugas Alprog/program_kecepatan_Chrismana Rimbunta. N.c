#include <stdio.h>

float v,s,t,i;


int main(){
	identitas();
	pilihan_menu();
	input_pil();
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

int pilihan_menu(){
    printf("======================================================== \n");
    printf("=====Program menghitung kecepatan, waktu,dan jarak ===== \n");
    printf("========================================================= \n");
    printf(" 1. Menghitung kecepatan \n 2. Menghitung waktu \n 3. Menghitung jarak\n");

    return 0;
}

int input_pil(){
    printf("\nMasukkan pilihan : ");
    scanf("%f", &i);

    return 0;

}

int eksekusi(){

    if (i==1){

    program_kecepatan();
    printf("maka kecepatannya adalah %.2f m/s", v);

    return 0;

    }

    else if (i==2){
    program_waktu();
    printf("maka waktunya adalah %.2f s", t);

    return 0;

    }

    else if (i==3){
    program_jarak();
    printf("maka jaraknya adalah %.2f m", s);

    return 0;

    }

}

int program_kecepatan(){
    printf("============================\n");
    printf("Program menghitung kecepatan\n");
    printf("============================\n");
    printf("Masukkan jarak (m): ");
        scanf("%f", &s);
    printf("Masukkan waktu (s): ");
        scanf("%f", &t);
    v=s/t;

    return 0;

}
int program_waktu(){
    printf("========================\n");
    printf("Program menghitung waktu\n");
    printf("========================\n");
    printf("Masukkan jarak (m): ");
        scanf("%f", &s);
    printf("Masukkan kecepatan (m/s) : ");
        scanf("%f", &v);
    t=s/v;

    return 0;

}
int program_jarak(){
    printf("========================\n");
    printf("Program menghitung jarak\n");
    printf("========================\n");
    printf("Masukkan waktu (s): ");
        scanf("%f", &t);
    printf("Masukkan kecepatan (m/s): ");
        scanf("%f", &v);
    s=v*t;

    return 0;

}
