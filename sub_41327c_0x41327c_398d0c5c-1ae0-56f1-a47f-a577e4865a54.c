// ============================================================
// 函数名称: sub_41327c
// 虚拟地址: 0x41327c
// WARP GUID: 398d0c5c-1ae0-56f1-a47f-a577e4865a54
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_410580
// [被调用的父级函数]: sub_4132fc
// ============================================================

int32_t __convention("regparm")sub_41327c(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_410580(*(arg2 - 4), arg1)
    int32_t result = sub_410580(*(arg2 - 4), arg1)
    
    if (result s< 0)
        result = sub_410580(*(arg2 - 8), arg1)
        
        if (result s>= 0)
            return sub_4103c8(*(arg2 - 4), arg1)
    
    return result
}
