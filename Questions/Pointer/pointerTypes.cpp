/* 
  ? Wild Pointer:-
    A wild pointer is a type of a pointer where, the user declares the,
    pointer but not initialize it.
    Due to this it ends up pointing to some random memeory location.
    Due to this we might get some undefined behaviour and crashes.
    In some case we might get segmentation fault(memory fault).

    int x;     Declaration of variable/garbage value
    int *ptr;  Declaration of pointer/garbage value

  ? Null Pointer:-
    If we wan't to have a pointer variable, which is just declared but
    will get address later to store. We can use NULL pointer.

    int *ptr = NULL;
    int *ptr = 0;
    int *ptr = "\o"

    1)Zero is mostly a special reserved memory address in many OS.
    2)Runtime error might occurs on derefrencing null pointer.

  ? Dangling Pointer:-
    It is a type of pointer that points to a memory location that is
    not valid.

    int *ptr = NULL;
    {
        int x = 10;
        ptr = &x;
    }

  ? Void Pointer:-
    These are special pointer that can point to any data type value.
    Void pointer cannot be derefrenced

    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;
    int *integerP1 = (int*)ptr  // output: 10
*/