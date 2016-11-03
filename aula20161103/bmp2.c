#include <stdio.h>
#include<stdlib.h>
#include <math.h>
struct Pixel{
    unsigned char B;
    unsigned char G;
    unsigned char R;
};
int main (){
    struct Pixel pixel, pixel2;
    int WPX, HPX, BPP, PAL, i, j, AUX, NCP, offset;
    FILE * imagem, * imagem2;
    unsigned char byte; // 1 byte
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    imagem = fopen ("sapo.bmp","rb");
    if(imagem == NULL){
        fprintf(stderr, "Arquivo nao encontrado!\n");
        return 1;
    }
    // 2 bytes 0-1
//Se for Windows, 'B' e 'M'
    fread(&byte, sizeof (byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof (byte), 1, imagem);
    printf("%c\n", byte);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo (bytes): %u\n", dword);
    fseek(imagem, 2* sizeof (word), SEEK_CUR);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset (bytes): %u\n", dword);
    offset = dword;
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabecalho (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem (pixels): %u\n", WPX);
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("Altura da imagem (pixels): %u\n", HPX);
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores: %u\n", word);
    fread(&word, sizeof(word), 1, imagem);
    BPP= word;
    printf("Bits por pixel: %u\n", BPP);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Metodo de compressao: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao horizontal: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao Vertical: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    NCP= (dword==0)? 1 << BPP : dword;
    printf("Resolucao horizontal: %u\n", NCP);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Numero de cores importantes: %u\n", (dword ==0) ? NCP : dword);
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha de array de pixels (bytes): %u\n", PAL);
    imagem2= fopen("sapo2.bmp", "wb");
    rewind(imagem);
    for (i=0; i < offset; i++){
        fread(&byte, sizeof(byte), 1, imagem);
        fwrite(&byte, sizeof(byte), 1, imagem2);
    }

    byte = 0x0;
    AUX = PAL - WPX*3;
   for(j=0; j< HPX; j++) {
   for(i=0; i< WPX;i++){
       fread(&pixel, sizeof(pixel), 1, imagem);

       pixel2.R= pixel.G;
       pixel2.G= pixel.R;
       pixel2.B= pixel.B;

       fwrite(&pixel2, sizeof(pixel2), 1, imagem2);
   }

    if (AUX> 0){
        fseek(imagem, AUX, SEEK_CUR);
        for (i= 0; i< AUX; i++)
            fwrite(&byte, sizeof(byte), 1, imagem2);
        }
   }
    fclose(imagem2);
    fclose(imagem);
    return 0;
}

