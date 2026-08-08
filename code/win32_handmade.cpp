#include <windows.h>
#include <winuser.h>

int WINAPI wWinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    PWSTR pCmdLine,
    int nCmdShow){

    MessageBox(0,"This is handmade","Handmade hero",
        MB_OK|MB_ICONINFORMATION);

    return 0;
};
