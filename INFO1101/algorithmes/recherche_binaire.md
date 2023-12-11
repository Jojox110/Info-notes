# Recherche binaire
La recherche binaire est un algorithm de recherche dans une liste de nombre trier. À chaque itération, on vérifie si la valeur du milieu est plus grand que la valeur qu'on cherche, on peut ignorer la moitier la plus grande. On peut faire l'opposer si la valeur est plus grande que la valeur du milieu.

## Visualization
```
[1, 3, 5, 7, 8, 9, 12]
valeur: 3

est-ce que 7 est plus grand, petit ou egale a valeur? plus grand

[1, 3, 5]
est-ce que 3 est plus grand, petit ou egale a valeur? egale
3 est dans la liste
```

## Implementation à Julien
```cpp
long RechercheBinaireIterative(long T[], long debut, long fin, long cible)
{
    // Précondition : L'intervalle de recherche doit être en ordre.
    long milieu;

    while (debut <= fin) // tant qu'il y a au moins un élément dans l'intervalle de recherche.
    {
        // L'intervalle de recherche est [debut, fin].

        milieu = (debut + fin) / 2;

        // On va diviser l'intervalle en trois parties :
        // - [debut, milieu-1]  l'intervalle gauche
        // - [milieu, milieu]   l'intervalle du milieu
        // - [milieu+1, fin]    l'intervalle droit
        // D'itération en itération, on va réduire l'intervalle
        // de recherche par un facteur de deux.
        if (cible < T[milieu]) // conserver l'intervalle gauche
            fin = milieu - 1;
        else if (cible > T[milieu]) // conserver l'intervalle droit
            debut = milieu + 1;
        else
            return milieu; // On a trouvé !!! (cible == T[milieu]).
    }
    return -1; // Échec, l'intervalle de recherche est devenu vide.
}
```