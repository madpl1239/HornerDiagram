
![alt text](HornerDiagram.png)

Of course this code is written in C++, which is my favorite programming language. I love programming in this language:))

But back to the main topic :smiley:


**What is Horner's diagram?**
==
Horner's scheme has two applications<br />

- we use it to divide polynomials by a polynomial, but only of the first degree.

- to calculate the value of polynomials for a given argument.<br /><br />

We will deal with the second case. We have the following polynomial:<br />
$`f(x) = ax^2 + bx + c`$, which can also be written like this<br />
$`f(x) = x(ax + b) + c`$

in the first case we have<br />
$f(x) = a * x * x + b * x + c$  - tree multiplicaions

and second case we have:<br />
$`f(x) = x * (a * a + b) + c`$ - two multiplications
 
For a third degree polynomial we will have (take my word 
for it) six multiplications and three additions.<br><br>

**When the degree of the polynomial increases, the number of multiplications increases.**<br />
***We all know that computers perform multiplication much slower than addition.***

--

And here comes the time for Horner's algorithm (or Horner's scheme). To use it, we need to simplify the polynomial.<br><br>

*What is it about?*<br><br>

We have a polynomial like this:

$`w(x) = a_4x^4 + a_3x^3 + a_2x^2 + a_1x + a_0`$


If we exclude all the x's in front of the bracket, we get:<br />
$`w(x) = x(x(x(a_4x + a_3) + a_2) + a_1) + a_0`$<br /><br />
And we can represent this above record in the form of a loop:<br />
$`w(x) = a_4`$ - start value,<br />
$`w(x) = w(x)x + a_i`$;$`~~~`$ for i = 3, 2, 1, 0<br /><br />
And now the same in C/C++:<br />
```c
float f = a[4];
for(int i = 3; i >= 0; --i)
    f = f * x + a[i];
```
<br />
And from there it's only one step to writing an iterative function that calculates<br />
the value of the polynomial at a given point:<br />

```c
// iterative version
float hornerIter(Vector& a, int& n, float& x)
{
    int i = 0;
    float f = 0.0f;

    f = a[0];
    for(int i = 1; i <= n; ++i)
        f = f * x + a[i];

    return f;
}
```
<br />
Here's the recursive version:<br />

```c
// recursive version
float hornerRec(Vector& a, int n, float x)
{
    if(n == 0)
        return a[0];
	
    return x * hornerRec(a, n - 1, x) + a[n];
}
```

<br /><br />
*license* 
[MIT](https://choosealicense.com/licenses/mit/)
