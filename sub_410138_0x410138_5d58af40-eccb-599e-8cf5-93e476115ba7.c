// ============================================================
// 函数名称: sub_410138
// 虚拟地址: 0x410138
// WARP GUID: 5d58af40-eccb-599e-8cf5-93e476115ba7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_406c44, sub_4103c8
// [被调用的父级函数]: sub_4102e4
// ============================================================

void*sub_410138()
{
    // 第一条实际指令: void* eax
    void* eax
    int32_t ecx
    int32_t edx
    eax, ecx, edx = sub_406c44()
    
    if (*(eax + 0xc) == 0)
        edx.b = 1
        *(sub_406c44() + 0xc) = sub_4030a0(ecx, edx)
    
    int32_t eax_5 = *(sub_406c44() + 8)
    int32_t ecx_1
    int32_t edx_2
    ecx_1, edx_2 = sub_4103c8(*(sub_406c44() + 0xc), eax_5)
    edx_2.b = 1
    int32_t eax_9 = sub_4030a0(ecx_1, edx_2)
    void* result = sub_406c44()
    *(result + 8) = eax_9
    return result
}
