// ============================================================
// 函数名称: sub_4634d0
// 虚拟地址: 0x4634d0
// WARP GUID: 0da23c5c-26fa-5e30-baed-6e6bd63f9ab1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46390c
// ============================================================

int32_t* __convention("regparm")sub_4634d0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x155)
    void* esi = *(arg1 + 0x155)
    int32_t* result_1 = (**(arg1 + 4))(arg3)
    *(esi + 8) = result_1
    int32_t i = 0
    int32_t* result = result_1
    
    do
        *result = i * 0x4c8b
        result[0x100] = i * 0x9646
        result[0x200] = i * 0x1d2f + 0x8000
        result[0x300] = i * 0xffffd4cd
        result[0x400] = i * 0xffffab33
        result[0x500] = (i << 0xf) + 0x807fff
        result[0x600] = i * 0xffff94d1
        result[0x700] = i * 0xffffeb2f
        i += 1
        result = &result[1]
    while (i s<= 0xff)
    
    return result
}
