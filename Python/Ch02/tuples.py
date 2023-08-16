# tuples - immutable data type

s = (1) # NOTa tuple
t = (1,) # the comma is required if only one element
print(f"{t=}: {type(t)}\n{s=}: {type(s)}")

x, y, z = 12, 34, 45 # multiple assigments
print(f"{x=}, {y=}, {z=}")

g = 1, 2, "4" # is equal to g = (1, 2, "4")
print(g)

# allows for line swaps - no temporary variable needed
print(f"Before swap: {x=}, {y=}")
x, y = y, x
print(f"After swap: {x=}, {y=}")

for i in g:
    print(i)
