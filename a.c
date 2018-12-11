#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct zaznam{
  char meno_P[50];
  char pohlavie[2];
  int rok;
  char spz[8];
  int typ;
  int vyska_p;
  int datum;
}ZAZNAM;
/* Poccet riadkov v subore */
int lines(FILE *f){
  char  buffer[BUFSIZ];
  int lines = 0;
  f = fopen("priestupky.txt", "r");
  while (fgets(buffer, sizeof buffer, f)) {
    ++lines;
  }
  fclose(f);
  f = NULL;
  return lines;
}
/* Rok pri zadavani datumu */
int rok(int n){
    while (n >= 10000)
        n /= 10;
    return n;
}
/* Mesiac pri zadavani datumu */
int mesiac(int n){
    n = n % 10000;
    while (n >= 100)
        n /= 10;
    return n;
}
/* Prikaz K */
void end(ZAZNAM *a,FILE *f){
  if( a != NULL){
    free(a);
    a = NULL;
  }
  if( f != NULL){
    fclose(f);
    f = NULL;
  }
}
/* Prikaz "o" */
void start(ZAZNAM **a, FILE **f, int counter){
  int i;
  if( *a != NULL)
    free(*a);
  if( *f != NULL)
    fclose(*f);
  ZAZNAM *c = NULL;
  *f=fopen("priestupky.txt","r");
  if( *f == NULL){
    printf("Chyba pri subore!\n" );
    return;
  }
  c = (ZAZNAM *) malloc(counter * sizeof(ZAZNAM));
  if( c == NULL){
    printf("Pole nie je naplnené\n" );
    return;
  }
  while ( ! feof (*f) )
  {
      for ( i = 0; i < counter; i++) {
        fscanf(*f,"%[^\n]\n %[^\n]\n %d\n %[^\n]\n %d\n %d\n %d\n",c[i].meno_P,c[i].pohlavie,&c[i].rok,c[i].spz,&c[i].typ,&c[i].vyska_p,&c[i].datum);
      }
  }
  *a = c
}
/* Vypis struktury */
void vypis(ZAZNAM *a, int counter){
  int i = 0;
  if ( a == NULL) {
    return;
  }
  for ( i = 0; i < counter; i++) {
    printf("meno priezvisko: %s\npohlavie: %s\nrok narodenia: %d\nSPZ: %s\ntyp prestupku: %d\nvyska pokuty: %d\ndatum priestupku: %d\n",a[i].meno_P,a[i].pohlavie,a[i].rok,a[i].spz,a[i].typ,a[i].vyska_p,a[i].datum);
    printf("\n" );
  }
}


int main(int argc, char const *argv[]) {
  FILE *f = NULL;
  ZAZNAM *a = NULL;
  int counter = 0;
  char moznost;
  while(1){
    scanf("%c",&moznost);
  if ( moznost == 'a') {
      counter++;
      add(&a,counter);
    }
  }

  return 0;
}
