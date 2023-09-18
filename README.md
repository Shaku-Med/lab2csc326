# PROBLEM 2 GIVEN THE DECLARATIONS

### `(A).`

    ptrA = new int;
    ptrB = new int;
    *ptrA = 345;
    *ptrB = 345;
    ptrB = ptrA;

<i>This code does not result in inaccessible objects or dangling pointers. It correctly allocates memory for `ptrA` and `ptrB`, assigns values to them, and then makes `ptrB` point to the same memory location as `ptrA`.</i>

### `(B).`

    ptrA = new int;
    *ptrA = 345;
    ptrB = new int;
    *ptrB = 345;
    ptrB = ptrA;

<i>This code does not result in inaccessible objects or dangling pointers. It allocates memory for `ptrA`, assigns a value to it, allocates memory for `ptrB`, assigns a value to it, and then makes `ptrB` point to the same memory location as `ptrA`..</i>

<br>

# GIVEN THE CLASS AND STATEMENTS IN MAIN():

    class CDAccount {
    private:
        double balance;
        char initial1;
        double interest_rate;
        int term;
        char initial2;

    public:
        // ...
    };

<hr/>

<b>
  What is the type of each of the following? Mark any that are not correct.
</b>

<p>
  <i>

    (c). CDAccount.term - This is not correct. It should be accessed using an instance of the class, like account.term.

  </i>

  <hr/>

  <i>

     (d). savings_account.initial1 - This is not correct. It assumes the existence of a savings_account object, which is not declared in the provided code.

  </i>
</p>

[FACEBOOK ME](https://facebook.com/medzy.amara.1)

## OR

[FACEBOOK ME](https://facebook.com/medzy.amara.2)

### HOW TO USE

### Type this command on your terminal.

### `git clone https://github.com/Shaku-Med/lab2csc326`

    git clone https://github.com/Shaku-Med/lab2csc326
