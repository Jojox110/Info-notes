# Listes liees

```cpp
struct Noeud_t {
    long valeur;
    Noeud_t *suivant;
};

void initializer(Noeud_t *&tete) {
    tete = new Noeud_t();
    tete->valeur = -1;
    tete->suivant = nullptr;
}

void estVide(Noeud_t *&tete) {
    return tete->suivant == nullptr;
}
```

# Implantation des pile, queue, deque et liste ordonnee

## Enlevement a la tete

```cpp
void enlevementTete(Noeud_t *&tete, long &donnee) {
    Noeud_t *element = new Noeud_t;
    element = tete->suivant;
    tete->suivant = tete->suivant->suivant;
    donnee = element->valeur;
    delete element;
}
```

## Insertion a la tete
```cpp
void insertionTete(Noeud_t *&tete, long donnee) {
    Noeud_t *nouveau = new Noeud_t;
    nouveau->valeur = donnee;
    nouveau->suivant = tete->suivant;
    nouveau->suivant = tete->suivant;
    tete->suivant = nouveau;
}
```

## Insertion a la queue
```cpp
void insertionQueue(Noeud_t *&tete, long donnee) {
    Noeud_t *curseur = tete;
    while (curseur->suivant != nullptr) curseur = curseur->suivant;

    Noeud_t *nouveau = new Noeud_t;
    nouveau->valeur = donnee;
    nouveau->suivant = nullptr;

    curseur->suivant = nouveau;
}
```

## Enlevement a la queue
```cpp
void enlevementQueue(Noeud_t *&tete, long &donnee) {
    Noeud_t *curseur = tete;
    while (curseur->suivant->suivant != nullptr) curseur = curseur->suivant;

    Noeud_t *element = curseur->suivant;
    donnee = element->valeur;
    delete element;
    curseur->suivant = nullptr;
}
```

## Insertion entre deux Noeud
```cpp
void insertionCroissant(Noeud_t *&tete, long donnee) {
    Noeud_t *curseur = tete;
    while (curseur->suivant != nullptr && curseur->suivant->valeur < donnee) curseur = curseur->suivant;

    if (curseur->suivant != nullptr) {
        // Inserstion a la queue si donnee est la valeur la plus grande de la liste liee
        Noeud_t *nouveau = new Noeud_t;
        nouveau->valeur = donnee;
        nouveau->suivant = nullptr;

        curseur->suivant = nouveau;
        return;
    }

    Noeud_t *nouveau = new Noeud_t;
    nouveau->valeur = donnee;
    nouveau->suivant = curseur->suivant;
    curseur->suivant = nouveau;
}
```

## Enlevement entre deux Noeud
```cpp
void enlevementCibler(Noeud_t *&tete, long cible) {
    Noeud_t *curseur = tete;
    while (curseur->suivant != nullptr && curseur->suivant->valeur < cible) curseur = curseur->suivant;

    if (curseur->suivant != nullptr && curseur->suivant->valeur == cible) {
        Noeud_t *element = curseur->suivant;
        curseur->suivant = curseur->suivant->suivant;
        delete element;
    }
}
```

## Pile

- Enlevement queue
- Insertion queue

## Queue

- Enlevement tete
- Insertion queue

## Deque

IMPORTANT: Deque non-completer, a re-travailler

- Enlevement tete
- Enlevement queue
- Insertion tete
- Insertion queue

## Liste ordonnee

- Enlevement cibler
- Insertion croissant
