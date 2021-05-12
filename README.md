# ft_printf
Write a library that contains ft_printf, a function
that will mimic the real printf

## Program name
libftprintf.a

## Turn in files
*.c, */*.c, *.h, */*.h, Makefile

## Makefile 
all, clean, fclean, re, bonus

## External functs. 
~~malloc~~, ~~free~~, write, va_start, va_arg, va_copy, va_end

## Notes of interest


My strategy for this was the following:
1. make a string up till to the conversion
2. make a string of the conversion with the flags ('-0.\*' and minimum width) in regard
3. make a string of the rest
4. if more then one conversion go to step 1
5. join them

Since at Codam
- we have to protect our mallocs 
- in case of a malloc fail, all other allocated memory needs to be freed
- the exit() function is not on the list of allowed/external functions
- it became a meme at Codam to fail peers during an evaluation if a malloc *was maybe not that well protected*

I figured it would be wisely to malloc as little as possible.

However during the project I realized if taken the easy approach for the conversions, I needed to malloc several times in case of flags being used. So my new approach was to calculate the exact amount of characters for the conversion so I only needed to malloc once for the conversion. Once this step was taken, I realized I could also write character for character without using malloc at all. 

So for the sake of a challenge I got rid of all the mallocs and the result is the **World's First Printf without use of Malloc (official title)** and a much easier peer evaluation :).

