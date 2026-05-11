// ============================================================
// 函数名称: sub_492e3c
// 虚拟地址: 0x492e3c
// WARP GUID: d699e165-37d4-5d60-8a02-ee2d32258a37
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820, sub_4318d0
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_492e3c(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t dwParam2 = arg3
    int32_t dwParam2 = arg3
    sub_492820(arg1)
    arg1[0xb4] = 0
    
    if (*(arg1 + 0x2d6) == 0)
        arg1[0xb4] = 2
    else
        if (arg1[0xb5].b != 0)
            arg1[0xb4] = 2
        
        *(arg1 + 0x2d6) = 0
    
    if (*(arg1 + 0x2d7) != 0)
        if (*(arg1 + 0x2d5) != 0)
            arg1[0xb4] |= 1
        
        *(arg1 + 0x2d7) = 0
    
    dwParam2 = sub_4318d0(arg1)
    uint32_t result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x808, arg1[0xb4], &dwParam2)
    arg1[0xbb] = result
    return result
}
