#include <assert.h>

#include "../change_case.c"

int main()
{
    // Test cases: Test the conversion of a capital letter to lower case
    assert(to_lower('A') == 'a');
    assert(to_lower('B') == 'b');
    assert(to_lower('F') == 'f');
    assert(to_lower('E') == 'e');
    
}
