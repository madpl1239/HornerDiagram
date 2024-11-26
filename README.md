
![alt text](HornerDiagram.png)

Of course this code is written in C++, which is my favorite programming language. I love programming in this language:))

But back to the main topic :smiley:


**What is Horner's diagram?**
--
Horner's scheme has two applications:

- we use it to divide polynomials by a polynomial, but only of the first degree.

- to calculate the value of polynomials for a given argument.


We will deal with the second case. We have the following polynomial:

$f(x) = ax^2 + bx + c$, which can also be written like this

$f(x) = x(ax + b) + c$

in the first case we have: (where mult means multiplication, and add meanns addition)

$f(x) = a  \cdots  x  \cdots  x  +  b  \cdots  x  add  c$  - tree multiplicaions and one addition.

and second case we have:

$f(x) = x  \cdots  (a  \cdots  a  +  b)  +  c$ - two multiplications and  two additions.
 
For a third degree polynomial we will have (take my word 
for it) six multiplications and three additions.

When the degree of the polynomial increases, the number of multiplications increases. 


*license* 
[MIT](https://choosealicense.com/licenses/mit/)
