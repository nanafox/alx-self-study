def str_reverse(s):
    """
    reverses any string - not in place!

    Args:
        s: string to reverse

    Returns:
        a reversed string
    """
    return s[::-1]

if __name__ == '__main__':
    words = ["Hello", "World", "Python"]

    for word in words:
        print(f"Word: {word}. Reversed: {str_reverse(word)}")
    
    print(words)
