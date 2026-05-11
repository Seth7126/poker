// ============================================================
// 函数名称: sub_492d64
// 虚拟地址: 0x492d64
// WARP GUID: 77ab08af-24ad-5c28-b890-3ce3d2c696ba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820, sub_4318d0
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_492d64(int32_t* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    arg1[0xb4] = 0
    
    if (*(arg1 + 0x2d7) == 0)
        arg1[0xb4] = 1
    else
        if (*(arg1 + 0x2d5) != 0)
            arg1[0xb4] = 1
        
        *(arg1 + 0x2d7) = 0
    
    if (*(arg1 + 0x2d6) != 0)
        if (arg1[0xb5].b != 0)
            arg1[0xb4] |= 2
        
        *(arg1 + 0x2d6) = 0
    
    if (arg1[0xb6].b != 0)
        arg1[0xb4] |= 4
        int32_t var_c_1 = arg1[0xb9]
        arg1[0xb6].b = 0
    
    if (*(arg1 + 0x2d9) != 0)
        arg1[0xb4] |= 8
        int32_t var_8_1 = arg1[0xb8]
        *(arg1 + 0x2d9) = 0
    
    int32_t dwParam2 = sub_4318d0(arg1)
    uint32_t result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80f, arg1[0xb4], &dwParam2)
    arg1[0xbb] = result
    return result
}
