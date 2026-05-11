// ============================================================
// 函数名称: sub_42abd0
// 虚拟地址: 0x42abd0
// WARP GUID: 7a5f74ee-e3bd-53cc-8a96-85e22e78c905
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42aebc
// [被调用的父级函数]: sub_42ad90
// ============================================================

void* __convention("regparm")sub_42abd0(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8.b = arg2
    void* ebx = arg1
    arg1.b = var_8.b
    
    if (arg1.b == *(ebx + 0x51))
        return arg1
    
    arg1.b = var_8.b
    *(ebx + 0x51) = arg1.b
    return sub_42aebc(ebx)
}
