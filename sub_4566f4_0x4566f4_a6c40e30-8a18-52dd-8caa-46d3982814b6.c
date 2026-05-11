// ============================================================
// 函数名称: sub_4566f4
// 虚拟地址: 0x4566f4
// WARP GUID: a6c40e30-8a18-52dd-8caa-46d3982814b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c, sub_4533f4
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_4566f4(void* arg1)
{
    // 第一条实际指令: char* esi_2 = (**(arg1 + 4))() + 0x100
    char* esi_2 = (**(arg1 + 4))() + 0x100
    *(arg1 + 0x136) = esi_2
    sub_4533f4(&esi_2[0xffffff00], 0, 0x100)
    int32_t i = 0
    char* edx_1 = esi_2
    
    do
        *edx_1 = i.b
        i += 1
        edx_1 = &edx_1[1]
    while (i s<= 0xff)
    
    int32_t i_1 = 0x80
    char* edx_2 = &esi_2[0x100]
    
    do
        *edx_2 = 0xff
        i_1 += 1
        edx_2 = &edx_2[1]
    while (i_1 s< 0x200)
    
    sub_4533f4(&esi_2[0x280], 0, 0x180)
    return sub_45340c(&esi_2[0x400], *(arg1 + 0x136), 0x80)
}
