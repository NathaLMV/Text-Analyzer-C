#include <stdio.h>
#include <string.h>

void vowels(char frase[], int len);
void consonant(char frase[], int len);
void capitalLetters(char frase[], int len);
void tiny(char frase[], int len);
void spacesAndCharacters(char frase[], int len);

int main() {
  char frase[80];

  printf("Ingresa una frase de 80 caracteres\n");

  printf("ingrsa la frase: ");
  fgets(frase, sizeof(frase), stdin);

  int len = strlen(frase);
  if(frase[len - 1] == '\n') {
    frase[len - 1] = '\0';
    len--;
  }
  vowels(frase,len);
  consonant(frase,len);
  capitalLetters(frase, len);
  tiny(frase, len);
  spacesAndCharacters(frase, len);
  return 0;
}

void vowels(char frase[], int len) {
  int totalVowels = 0;
  int vowelOne = -1;
  for (int i = 0; i < len; i++) {
    if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' ||frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
      if (vowelOne == -1) {
        vowelOne = i;
      }
      totalVowels++;
    }
  }
  if (vowelOne != -1) {
    printf("La primera vocal es: %c\n",frase[vowelOne]);
  }
  printf("Vocales totales: %d\n",totalVowels);
}

void consonant(char frase[], int len) {
  int totalConsonant = 0;
  for (int i = 0; i < len; i++) {
    if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase [i] >= 'A' && frase[i] <= 'Z')) {
      if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U') {
        totalConsonant++;
      }
    }
  }
  printf("Consonantes totales: %d\n",totalConsonant);
}

void capitalLetters(char frase[], int len) {
  int capitalLettersTotal = 0;
  int capitalLettersOne = -1;
  for (int i = 0; i < len; i++) {
    if (frase [i] >= 'A' && frase[i] <= 'Z') {
      capitalLettersTotal++;
      if (capitalLettersOne == -1) {
        capitalLettersOne = i;
      }
    }
  }
  //Si es 0 no muestra el texto de mayusculas si es otro numero superior si
  if (capitalLettersTotal > 0) {
    printf("Mayusculas totales: %d\n",capitalLettersTotal);
    printf("La primera mayuscula es: %c\n",frase[capitalLettersOne]);
  } 
}

void tiny(char frase[], int len) {
  int tinyTotal = 0;
  for (int i = 0; i < len; i++) {
    if (frase [i] >= 'a' && frase[i] <= 'z') {
      tinyTotal++;
    }
  }
  printf("Minusculas totales: %d\n",tinyTotal);
}

void spacesAndCharacters(char frase[], int len) {
  int spaces = 0;
  int characters = len;
  for (int i = 0; i < len; i++) {
    if (frase[i] == ' ') {
      spaces++;
    }
  }
  printf("espacios totales: %d\n", spaces);
  printf("Caracteres totales: %d\n", characters);
}