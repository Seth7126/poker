// ============================================================
// 函数名称: sub_4589f0
// 虚拟地址: 0x4589f0
// WARP GUID: 7620747d-f691-5069-a30a-3950a76f3e88
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458dd0
// ============================================================

int32_t __convention("regparm")sub_4589f0(void* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1ba)
    void* ebx = *(arg1 + 0x1ba)
    *(ebx + 8) = (**(arg1 + 4))()
    *(ebx + 0xc) = (**(arg1 + 4))()
    *(ebx + 0x10) = (**(arg1 + 4))()
    *(ebx + 0x14) = (**(arg1 + 4))()
    int32_t i = 0
    int32_t edx_4 = 0xffffff80
    
    do
        *(*(ebx + 8) + (i << 2)) = (edx_4 * 0x166e9 + 0x8000) s>> 0x10
        *(*(ebx + 0xc) + (i << 2)) = (edx_4 * 0x1c5a2 + 0x8000) s>> 0x10
        *(*(ebx + 0x10) + (i << 2)) = edx_4 * 0xffff492e
        int32_t ecx_12 = edx_4 * 0xffffa7e6 + 0x8000
        edx_4 += 1
        *(*(ebx + 0x14) + (i << 2)) = ecx_12
        i += 1
    while (i s<= 0xff)
    
    return i
}
