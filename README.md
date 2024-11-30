
![alt text](HornerDiagram.png)

Of course this code is written in C++, which is my favorite programming language. I love programming in this language:))

But back to the main topic :smiley:


**What is Horner's diagram?**
==
Horner's scheme has two applications<br><br>

- we use it to divide polynomials by a polynomial, but only of the first degree.

- to calculate the value of polynomials for a given argument.<br><br>


We will deal with the second case. We have the following polynomial:

$f(x) = ax^2 + bx + c$, which can also be written like this

$f(x) = x(ax + b) + c$

in the first case we have

$f(x) = a * x * x + b * x + c$  - tree multiplicaions

and second case we have:

$f(x) = x * (a * a + b) + c$ - two multiplications
 
For a third degree polynomial we will have (take my word 
for it) six multiplications and three additions.<br><br>

***When the degree of the polynomial increases, the number of multiplications increases.***
--

And here comes the time for Horner's algorithm (or Horner's scheme). To use it, we need to simplify the polynomial.<br><br>

*What is it about?*<br><br>

We have a polynomial like this:

$ w(x) = a4*x^4 + a3*x^3 + a2*x^2 + a1*x + a0 $


If we exclude all the x's in front of the bracket, we get:<br>


*license* 
[MIT](https://choosealicense.com/licenses/mit/)
