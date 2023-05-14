#include  <stdio.h>

int    main(){
    char nama_barang;
    int harga_barang;
    printf("masukan nama barang :");
    scanf("%[^\n]s", &nama_barang);
    
    printf("masukan harga barang :");
    scanf("%i", &harga_barang);
    
    printf("==========\n");
    printf("barang : %s\n",nama_barang);
    printf(" harga : %i\n",harga_barang);
    printf("==========\n");
}