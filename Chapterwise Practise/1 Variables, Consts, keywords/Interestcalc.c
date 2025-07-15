#include <stdio.h>

int main(){
    int p, r, t;
    
    printf("Enter the Principle Amount -");
    scanf("%d" , &p);

    printf("Enter the percentage Rate of Interest -");
    scanf("%d" , &r);

    printf("Enter the Time in Yrs -");
    scanf("%d" , &t);

    printf(" The Simple interest Amount is %f" , p*r*t/100.0);
    
    return 0;
}


/*
CHATGPT - 
You're **very close**, but there's a small issue:
You're using **`%f`**, which is for `float` or `double`, but the expression `p * r * t / 100` is entirely made up of **integers** — so the division is done as **integer division**, and then it's being printed as a `float`, which causes:

* **wrong or incomplete output** (you’ll get a float with `.000000` if the result was a whole number),
* or **loss of decimal precision** if the result was not a whole number.

---

### ✅ Fix:

To make sure you get a **decimal result**, at least one of the numbers in the expression should be a `float`. You can do that by:

* Casting one operand to float **or**
* Dividing by `100.0` (a float)

---

### ✔️ Corrected Code:

```c
#include <stdio.h>

int main(){
    int p, r, t;
    
    printf("Enter the Principle Amount - ");
    scanf("%d", &p);

    printf("Enter the percentage Rate of Interest - ");
    scanf("%d", &r);

    printf("Enter the Time in Yrs - ");
    scanf("%d", &t);

    // Now using float division
    float si = (p * r * t) / 100.0;

    printf("The Simple Interest Amount is %.2f\n", si);
    
    return 0;
}
```

---

### ✅ Output Example:

```
Enter the Principle Amount - 1000
Enter the percentage Rate of Interest - 5
Enter the Time in Yrs - 2
The Simple Interest Amount is 100.00
```

Let me know if you'd like to accept decimal values for principal or rate too (e.g., 5.5%).

*/