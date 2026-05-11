// ============================================================
// 函数名称: sub_4307fc
// 虚拟地址: 0x4307fc
// WARP GUID: b6bedf74-ee6c-549e-a3b7-5780f2f76adb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_440d94, sub_435a60
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4307fc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (*(data_531750 + 0x20) == 0)
    if (*(data_531750 + 0x20) == 0)
        *(data_531750 + 0x20) = 1
        sub_435a60(data_531750, 0x68)
    
    void* eax
    eax.w = *(arg2 + 4)
    *(arg2 + 4) = sub_440d94(eax.w)
    int32_t ebx
    ebx.w = 0xffb7
    int32_t result = sub_4032ac(arg1, arg2)
    
    if (*(arg2 + 0xc) != 0)
        return result
    
    return (*(*arg1 - 0x10))()
}
