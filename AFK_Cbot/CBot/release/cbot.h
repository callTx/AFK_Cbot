#ifndef CBOT_H
#define CBOT_H
#include <windows.h>
#include <iostream>
#include <string>
#define DIK_Q               0x10
#define DIK_W               0x11
#define DIK_E               0x12
#define DIK_R               0x13
#define DIK_T               0x14
#define DIK_Y               0x15
#define DIK_U               0x16
#define DIK_I               0x17
#define DIK_O               0x18
#define DIK_P               0x19
#define DIK_A               0x1E
#define DIK_S               0x1F
#define DIK_D               0x20
#define DIK_F               0x21
#define DIK_G               0x22
#define DIK_H               0x23
#define DIK_J               0x24
#define DIK_K               0x25
#define DIK_L               0x26
#define DIK_Z               0x2C
#define DIK_X               0x2D
#define DIK_C               0x2E
#define DIK_V               0x2F
#define DIK_B               0x30
#define DIK_N               0x31
#define DIK_M               0x32
#define DIK_SPACE           0x39
class CBot {

private:
    int findKeyCode(char key);
public:
    CBot();
    void setCursorPosition(int xPos, int yPos);
    int getCursorPosition(char typ); // typ = 'x' or 'y'
    void moveCursorTo(int xPos, int yPos);
    void addCursorForce(int xForce, int yForce);
    void wait(int seconds);
    void writeText(std::string text); // simulate keystroke to write text
    void holdKey(char key, int timeMs);
    void pressKey(char key);
    void click();
    bool isAfk(int timeMs);
};

#endif // CBOT_H
