// ============================================================
// 函数名称: sub_492fb0
// 虚拟地址: 0x492fb0
// WARP GUID: 2c29852c-77d4-550a-a130-0b72845a883f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492c54, sub_492820, sub_4318d0
// [被调用的父级函数]: sub_492ed0
// ============================================================

uint32_t __convention("regparm")sub_492fb0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t dwParam2 = arg3
    int32_t dwParam2 = arg3
    sub_492820(arg1)
    arg1[0xb4] = 0
    
    if (*(arg1 + 0x2d7) == 0)
        arg1[0xb4] = 1
    else if (*(arg1 + 0x2d5) != 0)
        arg1[0xb4] = 1
    
    if (*(arg1 + 0x2d6) != 0 && arg1[0xb5].b != 0)
        arg1[0xb4] |= 2
    
    dwParam2 = sub_4318d0(arg1)
    uint32_t result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x855, arg1[0xb4], &dwParam2)
    arg1[0xbb] = result
    
    if (result != 0)
        return sub_492c54(arg1)
    
    if (*(arg1 + 0x2d7) != 0)
        *(arg1 + 0x2d7) = 0
    
    if (*(arg1 + 0x2d6) != 0)
        *(arg1 + 0x2d6) = 0
    
    return result
}
