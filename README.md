# internal-hack

This is base to start an internal hack.

## Things included
- Dev C++ Project that creates custom dll. (Some old version, I would say, the classic version. I guess it was 'Dev-Cpp 5.11 TDM-GCC 4.9.2' from https://sourceforge.net/projects/orwelldevcpp/)
- Dll Injector - http://www.extremeinjector.com/
- A simple program as a test subject

## How to
- Run `test-subject.exe`
- Run `Extreme Injector v3.exe`
- Select the `Custom-Dll.dll` and inject it in `test-subject.exe` process.
- Now the value of variable `g_health` should be changed to `50`.

> Compiler used: The compiler included in Dev C++ 'MinGW'
