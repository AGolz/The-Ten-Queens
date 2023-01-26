# The-Ten-Queens :chess_pawn:

A program that displays all possible arrangements of queens on a chessboard that would contain ten columns and ten rows, without them being able to reach each other in one move.

Recursivity is required to solve this problem.

Here’s how it’ll be displayed :

```
$>./a.out | cat -e
0257948136$
0258693147$
...
4605713829$
4609582731$
...
9742051863$
$>
```
• The sequence goes from left to right. The first digit represents the first Queen’s
position in the first column (the index starting from 0). The Nth digit represents
the Nth Queen’s position in the Nth column.

• The return value must be the total number of displayed solutions.

to start, run:

```
$>cc ft_ten_queens_puzzle.c main_queen.c
$>./a.out | cat -e

```

Need help: emaksimo@student.42yerevan.am
