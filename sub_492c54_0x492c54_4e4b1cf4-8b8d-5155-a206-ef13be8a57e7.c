// ============================================================
// 函数名称: sub_492c54
// 虚拟地址: 0x492c54
// WARP GUID: 4e4b1cf4-8b8d-5155-a206-ef13be8a57e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_4318d0, sub_4939e0, sub_492820, sub_4935fc, sub_493ab4
// [被调用的父级函数]: sub_4931f4, sub_492528, sub_51a454, sub_51a68f, sub_493064, sub_492fb0
// ============================================================

uint32_t __convention("regparm")sub_492c54(int32_t* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    
    if (*(arg1 + 0x306) != 0 && sub_493ab4(arg1) == sub_4939e0(arg1) && arg1[0xb6].b == 0
            && *(arg1 + 0x2d9) == 0)
        sub_4935fc(arg1)
    
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
        int32_t var_10_1 = arg1[0xb9]
        arg1[0xb6].b = 0
    
    if (*(arg1 + 0x2d9) != 0)
        arg1[0xb4] |= 8
        int32_t var_c_1 = arg1[0xb8]
        *(arg1 + 0x2d9) = 0
    
    int32_t dwParam2 = sub_4318d0(arg1)
    uint32_t result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x806, arg1[0xb4], &dwParam2)
    arg1[0xbb] = result
    return result
}
