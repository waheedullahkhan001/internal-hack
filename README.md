# internal-hack

This is base to start an internal hack.

## Things included
- Dev C++ Project that creates custom dll.
- Dll Injector - http://www.extremeinjector.com/
- A simple program as a test subject

## How to
- Run `test-subject.exe`
- Run `Extreme Injector v3.exe`
- Select the `Custom-Dll.dll` and inject it in `test-subject.exe` process.
- Now the value of variable `g_health` should be changed to `50`.

All of it is done in MinGW!
