#include <stdio.h>
int g_a = 0, g_b = 0, g_c = 0; // Variables globales si utile (visibles par init() et main() ici
void init() {} // Fonction d'initialisation si besoin
int main() {
  init(); // Appel fonction d'init
  int a = 3, b = 2, c = 1, d = 2; // Variable globales à la fonction si nécessaire et leur initialisation

  while(a-- > 0) {
    printf("Boucle while\n");
  }

  for (int i = 0; i < b; i++) {}

  if(c) {
    printf("Test if\n");
  }

  switch (d) {
    case 1: 
    printf("%d\n", d);
    // ...
    break;
    case 2: 
    printf("%d\n", d);
    // ...
    break;
    case 3: 
    printf("%d\n", d);
    // ...
    break;
    default:
    printf("%d\n", d);

  {
    int x = 1, y = 10; // Ces variables sont locales
    printf("x == %d, y == %d\n", x, y);
  } // Et sortent de la pile (stack) ici
//  printf("x == %d, y == %d\n", x, y); // Erreur de compilation

  }
  return 0;
}
