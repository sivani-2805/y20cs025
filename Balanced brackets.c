#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define size 1000

struct stack {
    char stack[size];
    int top;
} s;

void push(char c) {
    if (s.top < size) {
        s.stack[++s.top] = c;
    }
}

char pop() {
    if (s.top > -1) {
        return  s.stack[s.top--];
    } else {
        return -1;
    }
}

int balancedbrackets(char *s, int len) {
    char t, c;
    if (len % 2 != 0) {
        return 0;
    }
    for(int i = 0; i < len; i++) {
        if ((s[i]=='(') || (s[i]=='{') || (s[i]=='[')) {
            push(s[i]);
        } else {
            switch(s[i]) {
                case ')': t = '('; break;
                case '}': t = '{'; break;
                case ']': t = '['; break;
            }
            c = pop();
            if (c == -1 || c != t) {
                return 0;
            }
        }
    }
    return pop() == -1;
}

int main() {
    int t, len;
    char str[1000], c;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        s.top = -1;
        len = 0;
        for (;;) {
            c = getchar();
            if (c == EOF || c == '\n') {
                break;
            }
            str[len] = c;
            len++;
        }
        printf("%s\n", balancedbrackets(str, len) == 0 ? "NO" : "YES");
    }
    return 0;
}
