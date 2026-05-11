// ============================================================
// 函数名称: sub_42606c
// 虚拟地址: 0x42606c
// WARP GUID: 1cf09a8f-da69-5ea3-b720-a8491078a65c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42b3e4
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_42606c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    arg1.w = *(arg2 + 6)
    int16_t temp0 = arg1.w
    arg1.w -= 1
    
    if (temp0 == 1)
        sub_42b3e4()
        int32_t* eax_1 = ebx
        ebx.w = 0xffec
        return sub_4032ac(eax_1)
    
    int16_t temp1 = arg1.w
    arg1.w -= 1
    
    if (temp1 != 1)
        return arg1
    
    int32_t* eax_3 = ebx
    ebx.w = 0xffeb
    return sub_4032ac(eax_3)
}
