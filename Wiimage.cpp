#include <Windows.h>
#include "stdafx.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)

int WINAPI WinMain(HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR CmdLine, int CmdShow)
{
	WNDCLASS wc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra =0;
	wc.hbrBackground = (HBRUSH)GetStockObject( WHITE_BRUSH );
	wc.hCursor = LoadCursor(NULL,L"Cursor");
	wc.hIcon = LoadIcon(NULL,L"Icon");
	wc.hInstance = hInstance;
	wc.lpfnWndProc = WndProc;
	wc.lpszClassName = L"Domo";
	wc.lpszMenuName = 0;
	wc.style = CS_HREDRAW | CS_VREDRAW; // Redraw the window
	RegisterClass(&wc);

	HWND hwnd = CreateWindow(
        TEXT("Philip"),         // THIS IS THE LINK
                                // to the WNDCLASS structure that
                                // we created earlier.

        TEXT("window's title!"),// appears in title of window

        WS_OVERLAPPEDWINDOW,    // STYLE of window.  WS_OVERLAPPEDWINDOW just means
                                // the window we create should have a few common features
                                // like a minimize box, a maximize box, and it should
                                // be resizeable by dragging the "thick frame" around
                                // the window. There are other styles
                                // and they all start with WS_.  Check it out in the
                                // autocomplete by typing WS_ THEN PRESSING CTRL+SPACE
                                // to make the autocomplete window come up.
        10, 10,                 // x, y start coordinates of window
        200, 200,               // width, height of window
        NULL, NULL,             // nothing and nothing (ignore to start out)
        hInstance, NULL );      // hInstance -- (see glossary), nothing

    // Next, SHOW and PAINT the window!
    // You won't see the window if you DO NOT
    // call ShowWindow();
    ShowWindow(hwnd, iCmdShow );
    UpdateWindow(hwnd);
}