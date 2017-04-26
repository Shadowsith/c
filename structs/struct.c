#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
};


int main(void){

    struct adresse firstadress;
    strcpy(firstadress.strasse,"Am Graben 2");
    strcpy(firstadress.hausnummer,"2A");
    firstadress.postleitzahl = 85110;
    strcpy(firstadress.stadt, "Kipfenberg");

    struct student firststudent;
    strcpy(firststudent.matrikelnummer,"A5X0");
    strcpy(firststudent.nachname,"Mayer");
    strcpy(firsstudent.vorname,"Philip");
    
    

}
