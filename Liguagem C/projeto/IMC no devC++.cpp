#include <windows.h>
#include <stdio.h>

#define ID_PESO 1
#define ID_ALTURA 2
#define ID_CALCULAR 3
#define ID_RESULTADO 4

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "CalculadoraIMC"; // Alterado para string ANSI (sem L)

    // Usando RegisterClassA para strings ANSI
    if (!RegisterClassA(&wc)) return -1;

    HWND hwnd = CreateWindowA(wc.lpszClassName, "Calculadora de IMC", WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT, 300, 200, NULL, NULL, hInstance, NULL);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    static HWND hPeso, hAltura, hCalcular, hResultado;
    switch (msg) {
    case WM_CREATE:
        CreateWindowA("STATIC", "Peso (kg):", WS_VISIBLE | WS_CHILD, 20, 20, 80, 20, hwnd, NULL, NULL, NULL);
        hPeso = CreateWindowA("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 20, 100, 20, hwnd, (HMENU)ID_PESO, NULL, NULL);
        CreateWindowA("STATIC", "Altura (m):", WS_VISIBLE | WS_CHILD, 20, 50, 80, 20, hwnd, NULL, NULL, NULL);
        hAltura = CreateWindowA("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 50, 100, 20, hwnd, (HMENU)ID_ALTURA, NULL, NULL);
        hCalcular = CreateWindowA("BUTTON", "Calcular", WS_VISIBLE | WS_CHILD, 20, 80, 180, 30, hwnd, (HMENU)ID_CALCULAR, NULL, NULL);
        hResultado = CreateWindowA("STATIC", "", WS_VISIBLE | WS_CHILD, 20, 120, 250, 30, hwnd, (HMENU)ID_RESULTADO, NULL, NULL);
        break;
    case WM_COMMAND:
        if (LOWORD(wParam) == ID_CALCULAR) {
            char pesoText[20], alturaText[20];
            GetWindowTextA(hPeso, pesoText, 20);
            GetWindowTextA(hAltura, alturaText, 20);

            float peso = atof(pesoText);
            float altura = atof(alturaText);

            if (altura > 0) {
                float imc = peso / (altura * altura);
                char resultado[100];

                const char* categoria;
                if (imc < 18.5) {
                    categoria = "Abaixo do peso";
                }
                else if (imc < 24.9) {
                    categoria = "Peso normal";
                }
                else if (imc < 29.9) {
                    categoria = "Sobrepeso";
                }
                else if (imc < 34.9) {
                    categoria = "Obesidade Grau I";
                }
                else if (imc < 39.9) {
                    categoria = "Obesidade Grau II";
                }
                else {
                    categoria = "Obesidade Grau III";
                }

                sprintf(resultado, "IMC: %.2f - %s", imc, categoria);
                SetWindowTextA(hResultado, resultado);
            }
            else {
                SetWindowTextA(hResultado, "Altura inválida.");
            }
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

