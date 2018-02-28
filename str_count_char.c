/*
 * count the number of a character in a string
 */
int str_count_char(const char *str, char c) {
    int count = 0;
    char *p = str;
    while ( *p ) {
        if ( *p == c )
            count++;
        p++;
    }
    return count;
}
