// https://viewsourcecode.org/snaptoken/kilo/03.rawInputAndOutput.html

/* includes */

#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

/* defines */

#define CTRL_KEY(k) ((k) & 0x1f)

/* data */

// global to store original terminal attributes
struct termios orig_termios;

/* terminal */

void die(const char *s) {
    write(STDOUT_FILENO, "\x1b[2J", 4);      // note: \x1b is escape character
    write(STDOUT_FILENO, "\x1b[H", 3);

    perror(s);
    exit(1);
}

void disable_raw_mode() {

    if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios) == -1) die("tcsetattr");
}

void enable_raw_mode() {
    if (tcgetattr(STDIN_FILENO, &orig_termios) == -1) die("tcgetattr");
    atexit(disable_raw_mode);

    struct termios raw = orig_termios;
    // key press flags
    raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);   // disable Ctrl-S and Ctrl-Q
    raw.c_oflag &= ~(OPOST);                                    // turn off all output processing
    raw.c_cflag |= (CS8);
    raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);            // note: bitflag
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 1;

    if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) die("tcsetattr");
}

char editor_read_key() {
    int nread;
    char c;
    while ((nread = read(STDIN_FILENO, &c, 1)) != 1) {
        if (nread == -1 && errno != EAGAIN) die("read");
    }
    return c;
}

/* output */

void editor_draw_rows() {
    int y;
    for (y = 0; y < 2; y++) {
        write(STDOUT_FILENO, "~\r\n", 3);
    }
}

void editor_refresh_screen() {
    write(STDOUT_FILENO, "\x1b[2J", 4);      // note: \x1b is escape character
    write(STDOUT_FILENO, "\x1b[H", 3);

    editor_draw_rows();

    write(STDOUT_FILENO, "\x1b[H", 3);
}

/* input */

void editor_process_keypress() {
    char c = editor_read_key();

    switch (c) {
        case CTRL_KEY('q'):
            write(STDOUT_FILENO, "\x1b[2J", 4);
            write(STDOUT_FILENO, "\x1b[H", 3);

            exit(0);
            break;
    }
}

/* init */

int main() {
    enable_raw_mode();
    
    while (1) {
        editor_refresh_screen();
        editor_process_keypress();
    }

    return 0;
}