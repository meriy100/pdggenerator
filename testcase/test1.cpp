int main() {
    int a = 0;
    int b = a;
    while (b < 10) {
        if (b % 2)
            continue;
        b = b + 1;
        a = a + 2;
    }
}
