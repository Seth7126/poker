// ============================================================
// 函数名称: sub_4933b0
// 虚拟地址: 0x4933b0
// WARP GUID: a7bee2e5-92a9-5c08-9542-2890bef81acf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_4318d0, sub_4939e0, sub_492820, sub_4935fc, sub_493ab4
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_4933b0(uint32_t arg1)
{
    // 第一条实际指令: uint32_t result = arg1
    uint32_t result = arg1
    sub_492820(result)
    
    if (*(arg1 + 0x2cf) != 0)
        if (*(arg1 + 0x306) != 0 && sub_493ab4(arg1) == sub_4939e0(arg1))
            sub_4935fc(arg1)
        
        *(arg1 + 0x2d0) = 0
        
        if (*(arg1 + 0x2d6) == 0)
            *(arg1 + 0x2d0) = 2
        else
            if (*(arg1 + 0x2d4) != 0)
                *(arg1 + 0x2d0) = 2
            
            *(arg1 + 0x2d6) = 0
        
        if (*(arg1 + 0x2d7) != 0)
            if (*(arg1 + 0x2d5) != 0)
                *(arg1 + 0x2d0) |= 1
            
            *(arg1 + 0x2d7) = 0
        
        *(arg1 + 0x2d0) |= 0x20000
        int32_t var_c = *(arg1 + 0x2e8)
        int32_t dwParam2 = sub_4318d0(arg1)
        result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80e, *(arg1 + 0x2d0), &dwParam2)
        *(arg1 + 0x2ec) = result
    
    return result
}
