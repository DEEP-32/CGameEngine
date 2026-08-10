#include <windows.h>

LRESULT CALLBACK MainWndProc(
    HWND window,   // handle to window
    UINT message,  // message identifier
    WPARAM wParam, // first message parameter
    LPARAM lParam  // second message parameter
) {
    LRESULT result = 0;
    switch (message) {
        case WM_SIZE: {
            OutputDebugStringA("WM_SIZE\n");
        } break;
        case WM_DESTROY: {
            OutputDebugStringA("WM_DESTROY\n");
        } break;

        case WM_CLOSE: {
            OutputDebugStringA("WM_CLOSE\n");
        } break;

        case WM_ACTIVATEAPP: {
            OutputDebugStringA(
                "WM_ACTIVATEAPP\n");
        } break;

        default: {
            OutputDebugStringA("default\n");
            result = DefWindowProc(
                window, message, wParam, lParam);
        } break;
    }
    return (result);
}

int WINAPI wWinMain(HINSTANCE instance,
                    HINSTANCE prevInstance,
                    PWSTR commandLine,
                    int showCode) {

    WNDCLASS WindowClass = {};
    WindowClass.style =
        CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    WindowClass.lpfnWndProc = MainWndProc;
    WindowClass.hInstance = instance;
    WindowClass.lpszClassName =
        "HandmaderHeroWindowClass";

    if (RegisterClass(&WindowClass)) {
        HWND windowHandle = CreateWindowEx(
            0, WindowClass.lpszClassName,
            "HandmadeHero",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CW_USEDEFAULT, CW_USEDEFAULT,
            CW_USEDEFAULT, CW_USEDEFAULT, 0, 0,
            instance, 0);

        if (windowHandle) {
            // Window created successfully
        } else {
            // Window creation failed
        }
    } else {
        // Register class failed
    }

    return 0;
}
