// ============================================================
// 函数名称: sub_4093b0
// 虚拟地址: 0x4093b0
// WARP GUID: 78304197-9eac-5a99-93f9-f2d5bb88a355
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409aac, sub_409a78, sub_43d69c, sub_40c150, sub_4b6154, sub_467208, sub_493b3c, sub_4095cc, sub_42c938, sub_40b250
// ============================================================

int32_t __convention("regparm")sub_4093b0(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t i = 0xffffffff
    
    while (i != 0)
        bool cond:0_1 = 0 != *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    return 0xfffffffe - i
}
