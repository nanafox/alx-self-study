# python version of counting lines and characters.

lines = 0
chars = 0

typing = True
while typing:
    try:    
        c = input() + "\n"  # added "\n" manually because it is stripped by default
        if "\n" in c:
            lines += 1  # count the lines
            chars += len(c.strip())  # count the characters
    except EOFError:    
        print(f"{lines} line(s), {chars} character(s)")
        typing = False