// ============================================================
// 函数名称: sub_45591c
// 虚拟地址: 0x45591c
// WARP GUID: 21579e23-5a55-528e-bc69-9d9eecc007e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455a44, sub_455a08, sub_455a48
// [被调用的父级函数]: sub_4548b8, sub_460fa0
// ============================================================

int32_t __convention("regparm")sub_45591c(int32_t* arg1)
{
    // 第一条实际指令: arg1[1] = 0
    arg1[1] = 0
    int32_t ecx
    void* (__convention("regparm")** eax_3)(int32_t* arg1, int32_t arg2, int32_t arg3) =
        sub_455a08(ecx, 0x50)
    
    if (eax_3 == 0)
        void* eax_5 = *arg1
        *(eax_5 + 0x14) = 0x35
        *(eax_5 + 0x18) = 0
        (**arg1)()
    
    *eax_3 = sub_454e00
    int32_t i = 1
    eax_3[1] = sub_454f30
    eax_3[2] = sub_454fd0
    eax_3[3] = sub_4550a4
    eax_3[4] = sub_455188
    eax_3[5] = sub_4551f0
    eax_3[6] = sub_455258
    eax_3[7] = sub_455548
    eax_3[8] = sub_455694
    eax_3[9] = sub_4557e0
    eax_3[0xa] = sub_4558e4
    eax_3[0xb] = 0
    void* eax_7 = &eax_3[0xd]
    
    do
        i -= 1
        *eax_7 = 0
        *(eax_7 + 8) = 0
        eax_7 -= 4
    while (i s>= 0)
    
    eax_3[0x10] = 0
    eax_3[0x11] = 0
    eax_3[0x12] = 0x50
    arg1[1] = eax_3
    return 0
}
