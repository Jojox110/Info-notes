# Calcul d'expression arithmétique

## Infix

Les calcul infix sont eu qu'on est habituer de faire déjà.

(Opérande) (Opérateur) (Opérande)

Ex: 5 * 4

## Prefix

Les calculs prefix suit la formule suivante:

(Opérateur) (Opérande) (Opérande)

RPN, mais on met l'opérateur dans la pile aulieu?

## Postfix (Aka RPN: Reverse Polish Notation)

Les calculs postfix suit la formule suivante:

(Opérande) (Opérande) (Opérateur)

Quand on lit une équation écrit sous forme Postfix, on met les chiffres dans la pile (le plus nouveau sur le top) et quand on arrive à un opérateur, on l'applique au deux chiffres au top de la pile et on les remplace par la réponse.

Ex: (la pile est horizontal, la gauche est le bas et la droite est le top)\
1 2 + 3 - 
<br>

1 2 \
3 \
3 3 \
0 \


