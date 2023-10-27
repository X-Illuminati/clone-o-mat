/* Copyright (c) 2023 Chris Baker - released under CC0 license */
#include <stdio.h>

static const char* strs[]={
"/* Copyright (c) 2023 Chris Baker - released under CC0 license */",
"#include <stdio.h>",
"",
"static const char* strs[]={",
"static const char q=34;",
"static const char c=44;",
"static const char n=10;",
"static const char s=59;",
"static const char b=125;",
"",
"int main(void) {",
"for(int i=0;i<4;i++) puts(strs[i]);",
"for(int i=0;i<16;i++) { putchar(q); fputs(strs[i], stdout); putchar(q); putchar(c); putchar(n); }",
"putchar(b); putchar(s); putchar(n); putchar(n);",
"for(int i=4;i<16;i++) puts(strs[i]);",
"putchar(b);putchar(n);",
};

static const char q=34;
static const char c=44;
static const char n=10;
static const char s=59;
static const char b=125;

int main(void) {
for(int i=0;i<4;i++) puts(strs[i]);
for(int i=0;i<16;i++) { putchar(q); fputs(strs[i], stdout); putchar(q); putchar(c); putchar(n); }
putchar(b); putchar(s); putchar(n); putchar(n);
for(int i=4;i<16;i++) puts(strs[i]);
putchar(b);putchar(n);
}
