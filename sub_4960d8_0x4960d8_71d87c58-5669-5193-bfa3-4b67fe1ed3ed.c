// ============================================================
// 函数名称: sub_4960d8
// 虚拟地址: 0x4960d8
// WARP GUID: 71d87c58-5669-5193-bfa3-4b67fe1ed3ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49555c
// [被调用的父级函数]: sub_49644c, sub_49682c, sub_496aa4
// ============================================================

void* __convention("regparm")sub_4960d8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8.b = arg2.b
    void* ebx = arg1
    arg1.b = *(ebx + 0x28)
    
    if (arg1.b != var_8.b)
        arg1.b = var_8.b
        *(ebx + 0x28) = arg1.b
        
        if (*(ebx + 4) != 0xffffffff)
            return sub_49555c(ebx, arg2, ecx)
    
    return arg1
}
