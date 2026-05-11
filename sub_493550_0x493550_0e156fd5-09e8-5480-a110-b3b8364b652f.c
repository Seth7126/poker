// ============================================================
// 函数名称: sub_493550
// 虚拟地址: 0x493550
// WARP GUID: 0e156fd5-09e8-5480-a110-b3b8364b652f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820, sub_4318d0
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_493550(uint32_t arg1)
{
    // 第一条实际指令: uint32_t result = arg1
    uint32_t result = arg1
    sub_492820(result)
    
    if (*(arg1 + 0x2cd) != 0)
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
        
        *(arg1 + 0x2d0) |= 0x100
        int32_t dwParam2 = sub_4318d0(arg1)
        result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80d, *(arg1 + 0x2d0), &dwParam2)
        *(arg1 + 0x2ec) = result
    
    return result
}
