# Implantations d'une pile, queue, deque, liste ordonnee

## Pile

```cpp
struct pile_t {
    long fait;
    long T[20];
};

void initialiser(pile_t &pile) {
    pile.fait = -1;
}

bool estVide(const pile_t &pile) {
    return pile.fait == -1;
}

bool estPlein(const pile_t &pile) {
    return pile.fait == array_size - 1;
}

void inserer(pile_t &pile, long donnee) {
    pile.fait++;
    pile.T[pile.fait] = donnee;
}

void enlever(pile_t &pile, long &donnee) {
    donnee = pile.T[pile.fait];
    pile.fait--;
}
```

## Queue

```cpp
struct file_t {
    long tete;
    long queue;
    long T[20];
};

void initializer(file_t &file) {
    file.tete = 0;
    file.queue = 0;
}

bool estVide(const file_t &file) {
    return file.tete == file.queue;
}

bool estPleine(const file_t &file) {
    return (file.queue + 1) % 20 == file.tete;
}

void afficher(const file_t &file) {
    short i = file.tete;
    while (i != file.queue) {
        cout << "[ " << i << " ]" << file.T[i] << endl;
        i += 1;
        i %= 20;
    }
}

void inserer(file_t &file, long donnee) {
    file.T[file.queue] = donnee;
    file.queue++;
    file.queue %= 20;
}

void enlever(file_t &file, long &donnee) {
    donnee = file.T[file.tete];
    file.T[file.tete] = -1;
    file.tete++;
    file.tete %= 20;
}
```

## TODO: deque

## Liste ordonnee

```cpp
const long tailleFile = 40;

struct liste_t {
    long compteur;
    long T[tailleFile];
}

void initialiser(liste_t &liste) {
    liste.compteur = 0;
    for (long i = 0; i < tailleFile; i++) liste.T[i] = -1;
}

bool estVide(const liste_t &liste) {
    return liste.compteur == 0;
}

bool estPleine(const liste_t &liste) {
    return liste.compteru == tailleFile;
}

void inserer(liste_t &liste, long donnee) {
    short i = 0;
    while (liste.T[i] < donnee && liste.T[i] != -1) i++;

    short j = liste.compteur;
    while (j > 1) {
        liste.T[j][ = liste.T[j - 1]];
        j--;
    }

    liste.T[i] = donnee;
    liste.compteur++;
}

bool enlever(liste_t &liste, long &donnee) {
    for (short i = 0; i < liste.compteur; i++) {
        if (liste.T[i] == donnee) {
            liste.T[i] = -2;
            liste.compteur--;
            return true
        }
    }
    liste.compteur--;
    return false;
}

void faireLeMenage(liste_t  &liste) {
    bool systole = false;
    short compteur = 0;
    for (short i = ; i < liste.compteur; i++) {
        if (liste.T[i] == -2) {
            systole = true;
            compteur++;
        }
        if (systole) {
            liste.T[i] = liste.T[i + 1];
        }
    }
    liste.compteur -= compteur;
    liste.T[liste.compteur] = -1;
}
```