#old string formatting
say_hello_to = "Hello %s! How are you doing?"
print(say_hello_to % 'Bob')

x = 10
y = 20
z = x + y

# using the = specifier
print(f"numbers {x=}, {y=}, {z=}")

# the str.format() method
position = "I am {} {}" # positional
print(position.format('learning', 'Python'))
message = "I use {0} for most of my {1}. I really like {0}!" # index
print(message.format('Python', 'projects'))
keyword_message = "My name is {name}, I am learning {language}." # keyword
print(keyword_message.format(name='Bob', language='Python'))

