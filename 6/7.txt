#include <stdio.h>

void add(char);

void deletel(char);

int rwx = 0;

int main()
{
    /* initiation */
    char temp;
    int i = 0;

    while (i < 3) {
        scanf("%c", &temp);

        if (temp == 'x') {
            rwx ^= (1 << 0);
            break;
        } else if (temp == 'w') {
            rwx ^= (1 << 1);
            scanf("%c", &temp);
            if (temp == 'x') {
                rwx ^= (1 << 0);
            }
            break;
        } else if (temp == 'r') {
            rwx ^= (1 << 2);
            scanf("%c", &temp);
            if (temp == 'w') {
                rwx ^= (1 << 1);
            }
            scanf("%c", &temp);
            if (temp == 'x') {
                rwx ^= (1 << 0);
            }
            break;
        }

        i++;
    }

    /* modification */
    while (scanf("%c", &temp) != EOF) {
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
        } else if (temp == '-') {
            scanf("%c", &temp);
            deletel(temp);
        }
    }

    /* output */
    printf("%d", rwx);
    return 0;
}

void add(char input)
{
    if (input == 'r' && rwx / 4 != 1) {
        rwx |= (1 << 2);
    } else if (input == 'w' && (rwx / 2 % 2 != 1)) {
        rwx |= (1 << 1);
    } else if (rwx % 4 != 1) {
        rwx |= (1 << 0);
    }
}

void deletel(char input)
{
    if (input == 'r' && rwx / 4 == 1) {
        rwx &= 3;
    } else if (input == 'w' && (rwx / 2 % 2 == 1)) {
        rwx &= 5;
    } else if (rwx % 4 == 1) {
        rwx &= 6;
    }
}
