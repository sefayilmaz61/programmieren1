#include <stdio.h>

int main(void) {

    FILE *f = fopen("input.txt", "r");
    //FILE *f2 = fopen("test.txt", "w");
    
    if (f == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }
    /*int c = fgetc(f);
    printf("Dateiinhalt 1 Zeichen: %c\n", c);
    char s[100];
    fgets(s, 100, f);
    printf("Dateiinhalt 1 Zeile: %s\n", s);
    fclose(f);
    return 0;
    */
   char p[100];
    fscanf(f, "%s", p);
    printf("Dateiinhalt 1 Wort: %s\n", p);
    fclose(f);  

    return 0;
}