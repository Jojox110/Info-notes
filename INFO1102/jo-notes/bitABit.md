# Opération bit-à-bit

## ET bit-à-bit

```
10100101 01010010
01010011 01011011

00001001 11110010

0 & 0 => 1
1 & 1 => 1
0 & 1 => 0
```

## OU bit-à-bit

```
10100101 01010010
01010011 01011011

11110111 01011011

0 | 0 => 0
1 | 1 => 1
0 | 1 => 1

```

## OU Exclusif (AKA "xou" or "xor")

```
10100101 01010010
01010011 01011011

11110110 00001001

0 ^ 0 => 0
1 ^ 1 => 0
0 ^ 1 => 1
```

## Négation

```
10100101 01010010

01011010 10101101

~0 => 1
~1 => 0
```

## Décalage vers la droite

```
x = 1101
x >> 1

0110

x = 1101
x >> 5

0000

Tout les bits du chiffre vont bouger de n position vers la droite
```

## Décalage vers la gauche

```
x = 1101
x << 1;

1010

x = 1101
x << 5;

0000

Tout les bits du chiffre vont bouger de n position vers la gauche
```

## Afficher un nombre décimal en binaire

```cpp
void afficherBinaire(unsigned short nombre) {
    unsigned short masque = 0b1000000000000000; // Modifier au même nombre de bits que ton paramètre. Dans ce cas, c'est 16 bits.
    for (short i = 0; i < 16; i++) {
        unsigned short reponse = ensemble & masque; // Ceci aura seulement effet à la position du 1 dans le masque
        cout << (reponse == 0 ? 0 : 1); // 1 si le nombre à le bit i d'activé, 0 sinon
        masque = masque >> 1; // Décale le 1 dans le masque vers la droite d'une position
    }
    cout << endl;
}
```