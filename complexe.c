#include "complexe.h"
#include <math.h>           // Pour certaines fonctions trigo notamment

// Implantations de reelle et imaginaire
float reelle(complexe_t z){
    return z.reelle;
}
float imaginaire(complexe_t z){
    return z.imaginaire;
}
// Implantations de set_reelle et set_imaginaire
void set_reelle(complexe_t z, float x){
    z.reelle = x;
}
/** PROCÉDURE set_imaginaire À IMPLANTER **/
/** PROCÉDURE init À IMPLANTER **/

// Implantation de copie
/** PROCÉDURE copie À IMPLANTER */

// Implantations des fonctions algébriques sur les complexes
/** PROCÉDURE conjugue À IMPLANTER **/
/** PROCÉDURE ajouter À IMPLANTER **/
/** PROCÉDURE soustraire À IMPLANTER **/
/** PROCÉDURE multiplier À IMPLANTER **/
/** PROCÉDURE echelle À IMPLANTER **/

/** PROCÉDURE puissance À IMPLANTER **/

// Implantations du module et de l'argument
/** FONCTION module_carre À IMPLANTER **/
/** FONCTION module À IMPLANTER **/
/** FONCTION argument À IMPLANTER **/


