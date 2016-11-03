//1 pixel { 1 byte Red; 1 byte Green; 1 byte Blue  // sem o canal alfha
// 3* 8 bits = 24 bits por pixel ---> 24bpp
// 2^24 = aproximadamente 16 milhões de cores
//tamanho da imagem = tamanho do arquivo - tamanho do cabeçalho
//Imagem
//72
//96 ---> Imagem em MONITOR
//150 ---> Imagem em JORNAL
//300 ---> imagem em LIVRO
//Numero de cores importantes (quando há compreensão da imagem)
//***************************************
//COR 01: R: 146  G: 19  B: 159
//COR 02: R: 0  G: 139  B: 191
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

struct Pixel{
    unsigned char B;
    unsigned char G;
    unsigned char R;

};

int main()
{
    struct Pixel pixel;
    int WPX, HPX, BPP, PAL, i,j, AUX, NCP;
    FILE * imagem;
    unsigned char byte;//1 byte
    unsigned short word;//2 byte
    unsigned int dword;//4 byte
    imagem = fopen ("IMAGEM.bmp","rb");

    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c",byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n",byte);

 //dword	2-5	Tamanho do arquivo (bytes)
 fread(&dword, sizeof(dword), 1, imagem);
 printf("Tamanho do arquivo (bytes): %u\n", dword);
 //word	6-7	Informação reservada
 //word	8-9	Informação reservada
 fseek(imagem, 2*sizeof(word), SEEK_CUR);//pulando 4 bytes
 //dword	10-13	Offset, onde dados da imagem começam
 fread(&dword, sizeof(dword), 1, imagem);
 printf("Offset (bytes): %u\n", dword);
 //dword	14-17	Tamanho do cabeçalho, a partir daqui
  fread(&dword, sizeof(dword), 1, imagem);
 printf("Tamanho do cabecalho (bytes): %u\n", dword);
 //dword	18-21	Largura da imagem (pixels), WPX
  fread(&dword, sizeof(dword), 1, imagem);
  WPX = dword;
  printf("Largura da imagem (pixels): %u\n", WPX);
 //dword	22-25	Altura da imagem (pixels), HPX
 fread(&dword, sizeof(dword), 1, imagem);
 HPX = dword;
  printf("Altura da imagem (pixels): %u\n", HPX);
 //word	26-27	Qtde de planos de cores
 fread(&word, sizeof(word), 1, imagem);
 printf("Quantidade de cores: %u\n", word);
 //word	28-29	Bits por pixel, BPP
 fread(&word, sizeof(word), 1, imagem);
 BPP = word;
 printf("Bits por pixel: %u\n", BPP);
 //dword	30-33	Método de compressão
 fread(&dword, sizeof(dword), 1, imagem);
 printf("Metodo de compreensao: %u\n", dword);
 //dword	34-37	Tamanho da imagem
 fread(&dword, sizeof(dword), 1, imagem);
 printf("Tamanho da imagem (bytes): %u\n", dword);
 //dword	38-41	Resolução horizontal
 fread(&dword, sizeof(dword), 1, imagem);
 printf("Resolucao horizontal: %u\n", dword);
 //dword	42-45	Resolução vertical
 fread(&dword, sizeof(dword), 1, imagem);
 printf("Resolucao vertical: %u\n", dword);
 //dword	46-49	Número de cores na paleta, NCP
 fread(&dword, sizeof(dword), 1, imagem);
 NCP = (dword == 0) ? 1 <<BPP: dword;
 printf("Numero de cores na paleta: %u\n", NCP);
 //dword	50-53	Número de cores importantes, NIC
 fread(&dword, sizeof(dword), 1, imagem);
 NCP = (dword == 0) ? 1 <<BPP: dword;
 printf("Numero de cores importantes: %u\n", (dword == 0 ) ? NCP : dword);

 //Tamanho da linha da array de pixels (bytes), PAL = floor((BPP*WPX + 31.)/32.)*4;
 PAL = floor((BPP*WPX + 31.)/32.)*4;
 printf("Tamanho da linha da array de pixels (bytes) : %u\n",PAL);
 //Leitura de pixel a pixel
 AUX =  PAL - WPX*3;

 for (j=0; j< HPX; j++)
    for (i=0; i<WPX; i++)
    {
        fread(&pixel, sizeof(pixel), 1, imagem);
        printf("R: %u, G: %u, B: %u\n", pixel.R,pixel.G,pixel.B);

    }
    if(AUX>0)
    {
        fseek(imagem, AUX, SEEK_CUR);
    }

 //AUX = PAL - WPX*3 (diferença em bytes entre a largura e a linha da array)
//para j de 0 a HPX-1 (a cada linha da imagem)
    //para i de 0 a WPX-1 (a cada coluna da mesma linha)
        //leia/escreva a informação do pixel (canais B, G e R, nesta ordem)
    //fim para
    //se AUX > 0 faça
        //pule/escreva AUX bytes a partir do byte corrente (sem informação útil)
    //fim se
//fim para
 fclose(imagem);
 return 0;
}
