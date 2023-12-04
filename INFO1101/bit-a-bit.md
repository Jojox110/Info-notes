# Bit-à-bit ET
1 si les deux valeurs qu'on compare est 1\
0 si au moins une des deux valeurs qu'on compare est 0

```
1 0 1 1 0 1 0 1 
0 0 1 1 0 1 1 0
---------------
0 0 1 1 0 1 0 0
```

<br>

# Bit-à-bit OU
1 si au moins une des deux valeurs qu'on compare est 1\
0 si les deux valeurs qu'on compare est 0

```
1 0 1 1 0 1 0 1
0 0 1 1 0 1 1 0
---------------
1 0 1 1 0 1 1 1
```

<br>

# Bit-à-Bit OU exclusif (Aka xor)
1 si les valeurs qu'on compare soit différentes (1 et 0)\
0 si les deux valeurs qu'on compare sont le même (1 et 1 ou 0 et 0)

```
1 0 1 1 0 1 0 1
0 0 1 1 0 1 1 0
---------------
1 0 0 0 0 0 1 1
```

<br>

# Bit-à-bit Négation 
Inverse tous les bits

```
1 0 1 1 0 1 0 1
---------------
0 1 0 0 1 0 1 0


0 0 1 1 0 1 1 0
---------------
1 1 0 0 1 0 0 1

```