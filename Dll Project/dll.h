
typedef void (__stdcall *setHealthAddress)(int);
setHealthAddress SetHealth = (setHealthAddress) (0x00401530);

typedef int (__stdcall *getHealthAddress)(void);
getHealthAddress GetHealth = (getHealthAddress) (0x00401542);

