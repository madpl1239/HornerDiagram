
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

***When the degree of the polynomial increases, the number of multiplications increases.***
--

And here comes the time for Horner's algorithm (or Horner's scheme). To use it, we need to simplify the polynomial.<br><br>

*What is it about?*<br><br>

We have a polynomial like this:

$`w(x) = a_4x^4 + a_3x^3 + a_2x^2 + a_1x + a_0`$


If we exclude all the x's in front of the bracket, we get:<br />
$`w(x) = x(x(x(a_4x + a_3) + a_2) + a_1) + a_0`$<br /><br />
And we can represent this above record in the form of a loop:<br />
$`w(x) = a_4`$ - start value,<br />
<pre>$`w(x) = w(x)x + a_i`$;    for i = 3, 2, 1,  0<br /></pre>


*license* 
[MIT](https://choosealicense.com/licenses/mit/)
