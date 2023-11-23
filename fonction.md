Permet d'ecrire des blocs de conde reutilisables.

Exemple:
```cpp

int add(int a, int b) { 

    int answer = a + b;
    return answer;
}

int main()
{
    add(5, 2);    
}

output: 7
```

Une fonction à besoin: 
    Un type de retour, dans ce cas int.
    Un indentificateur de la fonction (add).
    Un liste de paramètres formeles entres paranthèses (int a et int b).
    Un "return", qui retourne une valeur ou une variable meme type que la fonction, une fonction de type "void" n'a pas besoin d'un "return".

Une fonction doit etre appeleer dans la fonctin main() afin d'etre executer.

