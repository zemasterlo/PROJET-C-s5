#ifndef COMPLEX_H
#define COMPLEX_H

// Type utilisateur complexe_t
struct complexe {
    float reel;
    float imaginaire;
};
typedef struct complexe complexe_t; 

// Fonctions reelle et imaginaire
/**
* reelle
* Cette fonction renvoie la partie réelle d'un nombre complexe
*
* Paramètres :
*  z     [in] complexe_t dont on veut la partie réelle
*
* Retour : float, la partie réelle
*
* Pré-conditions : 
*   z non null
*
* Post-conditions :
*   aucune
*
* Cas d'erreur : aucun
*/
float reelle(complexe_t z);

/**
* imaginaire
* Cette fonction renvoie la partie imaginaire d'un nombre complexe
*
* Paramètres :
*  z     [in] complexe_t dont on veut la partie imaginaire
*
* Retour : float, la partie imaginaire
*
* Pré-conditions : 
*   z non null
*
* Post-conditions :
*   aucune
*
* Cas d'erreur : aucun
*/
float imaginaire(complexe_t z);

// Procédures set_reelle, set_imaginaire et init
/**
 * set_reelle
* Cette procédure modifie la partie reelle du nombre complexe donné avec le nombre réel
donné
*
* Paramètres :
*  z     [in out] complexe_t dont on veut changer la partie reelle
*  x     [in] float, la nouvelle partie reelle
*
* Retour : Rien
*
* Pré-conditions : 
*   z non null
*
* Post-conditions :
*   z.reelle = x
*
* Cas d'erreur : aucun
 */
void set_reelle(complexe_t z, float x);

/**
 * set_imaginaire
* Cette procédure modifie la partie imaginaire du nombre complexe donné avec le nombre réel
donné
*
* Paramètres :
*  z     [in out] complexe_t dont on veut changer la partie imaginaire
*  x     [in] float, la nouvelle partie imaginaire
*
* Retour : Rien
*
* Pré-conditions : 
*   z non null
*
* Post-conditions :
*   z.imaginaire = x
*
* Cas d'erreur : aucun
*/
void set_imaginaire(complexe_t z, float x);

/**
 * init
 *
* Cette procédure modifie la partie réelle et la partie imaginaire du nombre complexe donné
avec les deux réels donné
*
* Paramètres :
*  z     [in out] complexe_t dont on veut changer les composantes
*  x     [in] float, la nouvelle partie réelle
*  y     [in] float, la nouvelle partie imaginaire
*
* Retour : Rien
*
* Pré-conditions : 
*   z non null
*
* Post-conditions :
*   z.reelle = x
*   z.imaginaire = y
*
*/
void init(complexe_t z, float x, float y);

// Procédure copie
/**
 * copie
 * Copie les composantes du complexe donné en second argument dans celles du premier
 * argument
 *
 * Paramètres :
 *   resultat       [out] Complexe dans lequel copier les composantes
 *   autre          [in]  Complexe à copier
 *
 * Pré-conditions : resultat non null
 * Post-conditions : resultat et autre ont les mêmes composantes
 */
void copie(complexe_t* resultat, complexe_t autre);

// Algèbre des nombres complexes
/**
 * conjugue
 * Calcule le conjugué du nombre complexe op et le sotocke dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe dont on veut le conjugué
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : reelle(*resultat) = reelle(op), complexe(*resultat) = - complexe(op)
 */
void conjugue(complexe_t* resultat, complexe_t op);

/**
 * ajouter
 * Réalise l'addition des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche + droite
 */
void ajouter(complexe_t* resultat, complexe_t gauche, complexe_t droite);

/**
 * soustraire
 * Réalise la soustraction des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche - droite
 */
void soustraire(complexe_t* resultat, complexe_t gauche, complexe_t droite);

/**
 * multiplier
 * Réalise le produit des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche * droite
 */
void multiplier(complexe_t* resultat, complexe_t gauche, complexe_t droite);

/**
 * echelle
 * Calcule la mise à l'échelle d'un nombre complexe avec le nombre réel donné (multiplication
 * de op par le facteur réel facteur).
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe à mettre à l'échelle
 *   facteur        [in]  Nombre réel à multiplier
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = op * facteur
 */
void echelle(complexe_t* resultat, complexe_t op, double facteur);

/**
 * puissance
 * Calcule la puissance entière du complexe donné et stocke le résultat dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe dont on veut la puissance
 *   exposant       [in]  Exposant de la puissance
 *
 * Pré-conditions : resultat non-null, exposant >= 0
 * Post-conditions : *resultat = op * op * ... * op
 *                                 { n fois }
 */
void puissance(complexe_t* resultat, complexe_t op, int exposant);

// Module et argument
/**
 * module_carre
 *
 * CONTRAT À COMPLETER
 */
/** FONCTION À DÉCLARER **/

/**
 * module
 *
 * CONTRAT À COMPLETER
 */
/** FONCTION À DÉCLARER **/

/**
 * argument
 *
 * CONTRAT À COMPLETER
 */
/** FONCTION À DÉCLARER **/


#endif // COMPLEXE_H


