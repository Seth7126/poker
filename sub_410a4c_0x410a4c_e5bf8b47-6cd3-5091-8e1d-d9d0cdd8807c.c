// ============================================================
// 函数名称: sub_410a4c
// 虚拟地址: 0x410a4c
// WARP GUID: e5bf8b47-6cd3-5091-8e1d-d9d0cdd8807c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410984, sub_4109a8
// [被调用的父级函数]: sub_439ab4, sub_4395b0
// ============================================================

int32_t* __convention("regparm")sub_410a4c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 u>= *(arg1 + 4))
    if (arg2 u>= *(arg1 + 4))
        if (arg2 s< 0)
            noreturn sub_410984() __tailcall
        
        sub_4109a8(arg1, arg2 + 1)
    
    int32_t* result = *(arg1 + 8)
    arg3.b = arg3.b
    
    if (arg3.b == 0)
        *result &= not.d(1 << (arg2 u% 0x20))
        return result
    
    *result |= 1 << (arg2 u% 0x20)
    return result
}
