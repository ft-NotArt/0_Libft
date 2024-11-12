# libft

My personal library of useful C functions

## About

### ft_printf

My ft_printf handles identifiers 'cspdiuxX%', flags '# +-0.' and '*' that can replace field width before '.' or precision after '.'

My ft_printf returns the number of characters it wrote if everything went well. It returns -1 when trying to pass NULL as the first argument instead of a string literal. It returns -2 when a write error occured.

### Norm

Everything is written in accordance with the norm (as of Nov 2024)

## Tests

While doing this first project at 42, I tried to write tests for every functions that I coded.

I didn't follow up for functions that I added afterward, so not every function has a test.