#include "complexe.h"
#include <math.h>           // Pour certaines fonctions trigo notamment

// Implantations de reelle et imaginaire
double reelle(complexe_t z){
    return z.reelle;
}
double imaginaire(complexe_t z){
    return z.imaginaire;
}
// Implantations de set_reelle et set_imaginaire
void set_reelle(complexe_t* z, double x){
    z->reelle = x;
}

void set_imaginaire(complexe_t* z, double x){
    z->imaginaire = x;
}

void init(complexe_t* z, double x, double y){
    set_reelle(z, x);
    set_imaginaire(z, y);
}

// Implantation de copie
void copie(complexe_t* resultat, complexe_t autre){
    init(resultat, reelle(autre), imaginaire(autre));
}

// Implantations des fonctions algébriques sur les complexes
void conjugue(complexe_t* resultat, complexe_t op){
    set_reelle(resultat, reelle(op));
    set_imaginaire(resultat, -imaginaire(op));
}
void ajouter(complexe_t* resultat, complexe_t gauche, complexe_t droite){
    set_reelle(resultat, reelle(gauche) + reelle(droite));
    set_imaginaire(resultat, imaginaire(gauche) + imaginaire(droite));
}
void soustraire(complexe_t* resultat, complexe_t gauche, complexe_t droite){
    set_reelle(resultat, reelle(gauche) - reelle(droite)); 
    set_imaginaire(resultat, imaginaire(gauche) - imaginaire(droite));}
void multiplier(complexe_t* resultat, complexe_t gauche, complexe_t droite){
    set_reelle(resultat, reelle(gauche) * reelle(droite) - imaginaire(gauche) * imaginaire(droite));
    set_imaginaire(resultat, reelle(gauche) * imaginaire(droite) + imaginaire(gauche) * reelle(droite));
}
void echelle(complexe_t* resultat, complexe_t op, double facteur){
    set_reelle(resultat, reelle(op) * facteur);
    set_imaginaire(resultat, imaginaire(op) * facteur);
}
void puissance(complexe_t* resultat, complexe_t op, int exposant){
    if (exposant==0){
        init(resultat, 1,0);
    }
    else {
    copie(resultat, op);
    for(int i = 1; i < exposant; i++){
        multiplier(resultat, *resultat, op);
    }
}
// Implantations du module et de l'argument
double module_carre(complexe_t z){
    return reelle(z) * reelle(z) + imaginaire(z) * imaginaire(z);
}
double module(complexe_t z){
    return sqrt(module_carre(z));
}
double argument(complexe_t z){
    // https://fr.wikipedia.org/wiki/Argument_d%27un_nombre_complexe
    if (module_carre(z) == 0) return 0;
    else if (imaginaire(z)==0 && reelle(z) < 0)
    {
        return M_PI;
    }
    else
    {
        return 2*atan(imaginaire(z)/(reelle(z)+sqrt(module_carre(z))));
    }
    
    return atan(imaginaire(z)/ reelle(z));
}


