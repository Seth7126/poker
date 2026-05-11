// ============================================================
// 函数名称: sub_4064e4
// 虚拟地址: 0x4064e4
// WARP GUID: b72fa2df-5145-57d7-8f4a-f2e47dcca39a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406403, sub_406398
// [被调用的父级函数]: j_sub_4064e4
// ============================================================

int32_t __convention("regparm")sub_4064e4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    int32_t i = 0xffffffff
    
    while (i != 0)
        bool cond:0_1 = 0 != *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    sub_406403(not.d(i) - 1, arg3 - (not.d(i) - 1))
    return sub_406398(arg1, arg2, not.d(i) - 1) __tailcall
}
