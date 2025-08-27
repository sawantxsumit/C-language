#ifdef WINDOWS
  #include <windows.h>
  int main() {
    MessageBox(NULL, "Hello from Windows!", "Message", MB_OK);
    return 0;
  }
#else
  #include <stdio.h>
  int main() {
    printf("Hello from another platform!\n");
    return 0;
  }
#endif
