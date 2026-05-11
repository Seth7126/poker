// ============================================================
// 函数名称: sub_402e28
// 虚拟地址: 0x402e28
// WARP GUID: 655183ec-067b-5a68-8f08-ab2d5e25431c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_47c01b, sub_488509, sub_484e24, sub_449678
// ============================================================

char __convention("regparm")sub_402e28(char* arg1, char* arg2)
{
    // 第一条实际指令: char* var_4 = arg1
    char* var_4 = arg1
    int16_t ecx
    ecx.b = 0xff
    char i
    
    do
        ecx:1.b = *arg2
        arg2 = &arg2[1]
        
        if (ecx:1.b == 0)
            break
        
        arg1 = &arg1[1]
        *arg1 = ecx:1.b
        i = ecx.b
        ecx.b -= 1
    while (i != 1)
    char result = arg1.b - var_4.b
    *var_4 = result
    return result
}
