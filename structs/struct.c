#include <stdio.h>
#include <stdlib.h>

struct adresse{
    char strasse[20];
    char hausnummer[5];
    int postleitzahl;
    char stadt[20];
};

struct student{
    char matrikelnummer[5];
    char nachname[20];
    char vorname[20];
    struct adresse wohnort;
}


int main(void){


}
