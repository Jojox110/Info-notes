# Les linked list (Listes liées en français?)

Une linked list est quand tu as plusieurs noeuds (nodes en anglais) qui se pointe.

Noeud 1 (la tête) -> Noeud 2 -> Noeud 3 -> nullptr

## Écrire un noeud avec un struct

```cpp
struct Noeud_t {
    int valeur; // Tu peux choisir le type et le nom voulu
    Noeud_t *prochain; // Tu ne peux pas le initializer dans le struct
};

// TODO: Test insertion et enlever, copier off Julien

void insertion(Noeud_t *&top, long donner) {
    Noeud_t *ptr = new Noeud_T;
    ptr->suivant = fait;
    fait = ptr;
}

void enlever(Noeud_t *&top, long &donner) {
    donner = fait->valeur;
    Noeud_t *ptr = fait;
    fait = fait->suivant;
    delete *ptr;
}

int main() {
    Noeud_t *tete = new Noeud_t;
    tete->valeur = 1;
    Noeud_t *deux = new Noeud_t;
    tete->prochain = deux;
    deux->valeur = 2;
    deux->prochain = nullptr;
}
```