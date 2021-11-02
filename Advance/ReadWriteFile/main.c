#include <stdio.h>

int main () {

        // printf ("%s\n", __FILE__);

    FILE *fp;
    fp = fopen("c:\\Users\\UDAY\\Desktop\\C\\Advance\\ReadWriteFile\\test.txt", "w+" );
    fputs ("PLEASE PUT THIS TEXT IN MY FILE", fp);
    fprintf (fp, "PLEASE PUT THIS TEXT IN MY FILE" ) ;
    fclose(fp);
    return 0;
}