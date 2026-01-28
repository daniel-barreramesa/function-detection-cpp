# Function_detection_cpp

The program is composed of two systems. A human-machine translator of mathematical equations, and a equation-solver system that uses the translated ecuations to operate.

## The translator

The goal of this system is to convert human readable mathematical functions into single-character functions that are easier for the program to read.

#### Example:

```
"cos(arctg(50x^3*e)) / log10(ln(-7*pi))"
```
###### output
```
"c(T(50x^3*e))/L10(l(-7*p))"
```

This is the list of translations performed by the program:
| Function | Code | Description |
| ------ | ------ |------------ |
| ln | l | napierian logarithm |
| log | L |logarithm |
| sen | s | sine |
| cos | c | cosine |
| tg | t | tangent |
| arcsen | S | arcsine |
| arccos | C | arccosine |
| arctg | T | arctangent |
| sqrt | r | square root |
| cbrt | R | cubic root |
| pi | p | number pi |

### Instructions to use the translator:

Copy the repository to your local machine. 
```
~/$ git clone git@github.com:/daniel-barreramesa/function-detection-cpp.git
```

Enter the src/ directory and compile the program

```
~/src$ g++ main.cc
```

To use the translator run the program and write the ecuation as an argument in quotes.

```
~/src$ ./a.out "cos(arctg(50x^3*e)) / log10(ln(-7*pi))"
```

The translator works only with one parameter and doesnt do any operation. 