#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
// Однобайтовое выравнивание
#pragma pack(1)
typedef struct BitmapFileHeader
{
    unsigned char bfType[2];// Формат файла
    unsigned long bfSize;// Размер файла
    unsigned short bfReserved1;// зарезервировано
    unsigned short bfReserved2;// зарезервировано
    unsigned long bfOffBits; // Смещение данных изображения в файле
}fileHeader;
typedef struct BitmapInfoHeader
{
    unsigned long biSize;// Размер структуры
    long biWidth;// Ширина файла
    long biHeight;// Высота файла
    unsigned short biPlanes;// Количество самолетов
    unsigned short biBitCount;// Количество цветных цифр
    unsigned long biCompression;// Тип сжатия
    unsigned long biSizeImage;// Размер области данных DIB
    long biXPixPerMeter;
    long biYPixPerMeter;
    unsigned long biClrUsed;// Количество таблиц цветовых индексов
    unsigned long biClrImporant;// Количество важных цветов
}fileInfo;

int main(void)
{
    FILE *fpaa;
    if ((fpaa = fopen("aa.bmp", "rb") )== NULL)
    {
        printf("Не удалось открыть файл");
        exit(0);
    }
    printf("смещение fpaa:% d \ n", ftell(fpaa));
    fileHeader *fh;
    printf("Размер структуры fileHeader:% d байтов \ n", sizeof(fileHeader));
    // Если однобайтовое выравнивание не выбрано, два байта добавляются относительно aa.bmp при применении к памяти
    fh= (fileHeader *)malloc(sizeof(fileHeader));
    fread(fh, sizeof(fileHeader), 1, fpaa);
    printf("Формат файла заголовка:% c% cP \ n", fh->bfType[0], fh->bfType[1]);
    printf(Msgstr "Размер файла заголовка:% d байт \ n", fh->bfSize);
    printf(«Смещение данных DIB в файле:% d байтов \ n», fh->bfOffBits);
    printf(msgstr "смещение fpaa после чтения заголовочного файла:% d \ n",ftell(fpaa));
    fileInfo * fi;
    fi = (fileInfo *)malloc(sizeof(fileInfo));
    fread(fi, sizeof(fileInfo), 1, fpaa);
    printf(msgstr "смещение fpaa после чтения информационного файла:% d \ n", ftell(fpaa));
    printf(«Размер растрового изображения:% d \ n»,fi->biSize);
    printf("Ширина файла:% d \ n", fi->biWidth);
    printf("Высота файла:% d \ n", fi->biHeight);
    printf(«Количество самолетов:% d \ n», fi->biPlanes);
    printf(«Количество цветных цифр:% d \ n», fi->biBitCount);
    printf(«Тип сжатия:% d \ n», fi->biCompression);
    printf(«Размер области данных DIB:% d \ n», fi->biCompression);
    printf(«Таблица цветовых индексов:% d \ n», fi->biClrUsed);
    printf(«Важные цвета:% d \ n», fi->biClrImporant);

    printf("\n");

    struct color
    {
        char r;
        char g;
        char b;
    };
    struct color *fc;
    fc = (struct color *)malloc(sizeof(struct color));
    for (int i = 1; i <=fi->biHeight; i ++)
    {
        fseek(fpaa, -((((fi->biBitCount * fi->biWidth) + 31) >> 5) << 2)*i, SEEK_END);
        for (int j = 1; j <= fi->biWidth; j ++ )
        {
            fread(fc, sizeof(struct color), 1, fpaa);
            if (fc->r == 0 & fc->g == 0 & fc->b == 0) printf("%c ",3);
            else printf("%c ", 46);
        }
        printf("\n");
        // ((ширина изображения * бит + 31 на пиксель) / 32) * 4 может гарантировать, что каждый столбец выровнен по 4 байта, потому что компьютер использует четыре байта за раз для скорости.
        // Выражение ниже показывает, сколько дополнительных байтов в строке
        int k = ((((fi->biBitCount * fi->biWidth) + 31) >> 5) << 2) - ((fi->biBitCount * fi->biWidth) >> 3);
        // Затем перемещаем указатель файла из этих байтов заполнения
        fseek(fpaa, k, SEEK_CUR);
    }

    // Может заменить чёрное и белое разными символами
    /*int m=10;
    for (int l=1;l<100;l++)
    {
        printf("%d:%c  ", l,l);
            if (m==0)
            {
                m = 10;
                printf("\n");
            }
            m--;
    }
    */
    getchar();
    return 0;
}
