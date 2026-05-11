// ============================================================
// 函数名称: sub_52afd8
// 虚拟地址: 0x52afd8
// WARP GUID: 02ffe327-4fe3-57ec-a4c3-5ea37e9efc0c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c51e4
// ============================================================

void __convention("regparm")sub_52afd8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t temp0 = *(arg1 + (arg2 << 2) + 0x10)
    int32_t temp0 = *(arg1 + (arg2 << 2) + 0x10)
    *(arg1 + (arg2 << 2) + 0x10) += arg3
    
    if (not(add_overflow(temp0, arg3)))
        return 
    
    sub_403010()
    noreturn
}
