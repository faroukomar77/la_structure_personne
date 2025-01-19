#include <stdio.h>
#include <stdlib.h>

struct Adresse{
    char ville[40];
    char pays[40];
};
typedef struct Adresse adresse;
struct Personne{
    char nom[50];
    int age;
    adresse ad;
};
typedef struct Personne personne;

personne creer_personne(){
    personne P;
    printf("Entrer votre nom:");
    scanf("%s",P.nom);
    printf("Entrer votre age:");
    scanf("%d",&P.age);
    printf("Entrer votre ville:");
    scanf("%s",P.ad.ville);
    printf("Entrer votre pays:");
    scanf("%s",P.ad.pays);
    return P;
}

personne afficher_personne(personne p){
    printf("Nom:%s \n",p.nom);
    printf("Age:%d\n",p.age);
    printf("ville:%s ,pays:%s \n",p.ad.ville,p.ad.pays);

}


int main()
{
    personne P;
    P=creer_personne();
    afficher_personne(P);
    return 0;
}
