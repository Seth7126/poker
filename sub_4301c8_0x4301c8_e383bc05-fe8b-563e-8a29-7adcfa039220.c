// ============================================================
// 函数名称: sub_4301c8
// 虚拟地址: 0x4301c8
// WARP GUID: e383bc05-fe8b-563e-8a29-7adcfa039220
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_446ed4, sub_434c80, sub_434ebc, sub_446c94, sub_446b40, sub_446ce8, sub_446c28, sub_4351a4, sub_429820, sub_43025c
// ============================================================

int32_t __convention("regparm")sub_4301c8(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x140)
    void* edx = *(arg1 + 0x140)
    
    if (edx == 0)
        return 0
    
    return *(edx + 8)
}
