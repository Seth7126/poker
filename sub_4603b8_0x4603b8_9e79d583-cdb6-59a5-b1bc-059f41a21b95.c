// ============================================================
// 函数名称: sub_4603b8
// 虚拟地址: 0x4603b8
// WARP GUID: 9e79d583-cdb6-59a5-b1bc-059f41a21b95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_453458, sub_45343c
// [被调用的父级函数]: sub_460418
// ============================================================

void* __convention("regparm")sub_4603b8(int32_t* arg1)
{
    // 第一条实际指令: void* ebx = arg1[5]
    void* ebx = arg1[5]
    int32_t esi = 0x1000 - *(ebx + 4)
    
    if (esi u> 0 && esi != sub_45343c(*(ebx + 0x18), 1, esi, *(ebx + 0x14)))
        *(*arg1 + 0x14) = 0x24
        (**arg1)()
    
    int32_t var_10_2 = *(ebx + 0x14)
    void* result = *(ebx + 0x14)
    
    if ((*(result + 0x12) & 0x10) == 0)
        return result
    
    *(*arg1 + 0x14) = 0x24
    return (**arg1)()
}
