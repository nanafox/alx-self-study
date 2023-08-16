str = "Hello world"

encoded_str = str.encode('utf-16')
decoded_str = encoded_str.decode('utf-16')

print(encoded_str)
print(type(encoded_str)) # encoded strings are of type bytes

print(decoded_str)

