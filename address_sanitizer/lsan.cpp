/*
 * source from https://www.jetbrains.com/help/clion/google-sanitizers.html
 */

int main(){
    __attribute__((unused))
    int *x = new int(10);
    return 0;
}
