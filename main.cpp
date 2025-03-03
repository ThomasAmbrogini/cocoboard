static void startup_handler();

using Isr = void (*)();

Isr interrupt_vector_table[] = {
    0,
    startup_handler
};

void startup_handler() {
    int c = 4 + 5;
}

int main() {
    int a = 4;

    a = 56;
}
