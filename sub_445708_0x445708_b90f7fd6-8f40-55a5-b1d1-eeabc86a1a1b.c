// ============================================================
// 函数名称: sub_445708
// 虚拟地址: 0x445708
// WARP GUID: b90f7fd6-8f40-55a5-b1d1-eeabc86a1a1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_444ce0, sub_4032ac, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

HWND __convention("regparm")sub_445708(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: HWND result = (*(*arg1 - 0x10))()
    HWND result = (*(*arg1 - 0x10))()
    
    if (*(arg1 + 0x217) == 1)
        int32_t eax_2
        eax_2.b = sub_4318d0(arg1) == *(arg2 + 8)
        char ebx_1 = eax_2.b
        int32_t edx_2
        result, edx_2 = sub_444ce0(arg1, ebx_1)
        
        if (ebx_1 != 0)
            result = *(data_5317d8 + 0x38)
            
            if ((result->__offset(0x44).b & 4) != 0)
                edx_2.b = 1
                return sub_4032ac(*(data_5317d8 + 0x38), edx_2)
    
    return result
}
