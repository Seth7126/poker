// ============================================================
// 函数名称: sub_490c10
// 虚拟地址: 0x490c10
// WARP GUID: 28bd8758-1b3a-5a45-b098-6092c5a32811
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_5193d0
// ============================================================

int32_t __convention("regparm")sub_490c10(void** arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[4]
    int32_t* eax = arg1[4]
    int32_t __saved_ecx
    int32_t result
    void* ebp
    result, ebp = sub_490768(arg1, "GetPlayStatus", (*(*eax + 0x24))(eax, &__saved_ecx))
    
    if ((*(ebp - 4) & 1) == 1)
        result.b = 1
    
    return result
}
