
#include <stdio.h>

void emptyFunction(int argc, char *argv[]) {
     for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
        printf("dd");
    }

}

int main(int argc, char *argv[]) {
    // Call the emptyFunction and pass the arguments to it
    emptyFunction(argc, argv);

    return 0;
}
