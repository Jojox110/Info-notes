# Les tableaux multidimensionnels
Les tableaux multidimensionnels sont des tableaux qui contient un ou plusieurs autres tableaux

```cpp
int main() {
    short x[3][3];
    short y[3][3][3];
    ...
}
```

## Visualization de ces deux tableaux

### Le tableau 2D
```cpp
int main() {
    short x[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << x[2][2] << endl; // 9
    cout << x[1][2] << endl; // 6
    cout << x[0][1] << endl; // 2
}
```

### Le tableau 3D
```cpp
int main() {
    short x[3][3][3] = 
    {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    cout << x[0][1][2] << endl; // 6
    cout << x[1][1][1] << endl; // 14
    cout << x[2][0][1] << endl; // 20
}
```