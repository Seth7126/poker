// ============================================================
// 函数名称: sub_4ce4c0
// 虚拟地址: 0x4ce4c0
// WARP GUID: c1d0c912-af47-522f-a354-3117ba6d7cb9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5b64, sub_403010
// [被调用的父级函数]: sub_4ce534
// ============================================================

int32_t __convention("regparm")sub_4ce4c0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 - 1) = 5
    *(arg2 - 1) = 5
    *(arg2 - 8) = 0
    
    if (arg1 - 0xb u< 5)
        *(arg2 - 8) = 1
        
        if (not(add_overflow(arg1, 0xfffffff6)))
            char eax_8 = sub_4d5b64(arg1 - 0xa)
            *(arg2 - 1) = eax_8
            return eax_8
        
        sub_403010()
        noreturn
    
    char eax_11 = (arg1 - 0x15).b - 5
    
    if (arg1 - 0x15 u< 5)
        *(arg2 - 8) = 9
        
        if (add_overflow(arg1, 0xffffffec))
            sub_403010()
            noreturn
        
        eax_11 = sub_4d5b64(arg1 - 0x14)
        *(arg2 - 1) = eax_11
    
    return eax_11
}
