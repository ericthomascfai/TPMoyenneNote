#include <stdio.h>
/***************************Variables Globales******************************/
int tab[30];
/***************************Prototypes***************************************/
void saisieNote();
void calculMoyenne(int nbnote);

/**************************Définitions**************************************/
void saisieNote() {
float note=0;
int nbnote=0;
while(nbnote<30&&note>=0)
{
    printf("Veuillez saisir une note\n -1 pour sortir\n");
    scanf("%f",&note);
    tab[nbnote]=note;
    nbnote++;
    if(note>=0)
    calculMoyenne(nbnote);
}
}

void calculMoyenne(int nbnote) {
    float moyenne=0;
    float somme=0;
    for(int i=0;i<nbnote;i++)
    {
        somme+=tab[i];
    }
    moyenne=somme/nbnote;
    printf("La moyenne est %0.2f\n",moyenne);

}

int main() {
    saisieNote();
    return 0;
}
