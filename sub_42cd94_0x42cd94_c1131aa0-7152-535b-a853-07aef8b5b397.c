// ============================================================
// 函数名称: sub_42cd94
// 虚拟地址: 0x42cd94
// WARP GUID: c1131aa0-7152-535b-a853-07aef8b5b397
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_440d94
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42cd94(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = (*(*arg1 - 0x10))()
    int32_t result = (*(*arg1 - 0x10))()
    
    if ((*(arg1 + 0x41) & 0x10) != 0)
        return result
    
    int32_t eax_1
    eax_1.w = *(arg2 + 4)
    int32_t ebx
    ebx.w = 0xffd9
    return sub_4032ac(arg1, sub_440d94(eax_1.w), sx.d(*(arg2 + 8)), sx.d(*(arg2 + 0xa)))
}
