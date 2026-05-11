// ============================================================
// 函数名称: sub_516e1c
// 虚拟地址: 0x516e1c
// WARP GUID: ff1f352d-08b0-53a9-bc7b-8abbd5e0cdef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ee7d8
// ============================================================

int32_t __convention("regparm")sub_516e1c(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (*(*data_5301f4 + 4) == 1)
        void* ecx_3
        ecx_3.b = *(*data_5301f4 + 0xffec)
        char temp0_1 = ecx_3.b
        ecx_3.b -= 4
        char temp1_1
        
        if (temp0_1 != 4)
            temp1_1 = ecx_3.b
            ecx_3.b -= 4
        
        if ((temp0_1 == 4 || temp1_1 == 4) && arg1 != 1 && *data_52fed0 != 0
                && arg1 == *(*data_52fed0 + 0x10) && *(*data_52fed0 + 0x25) == 5)
            result.b = 1
    
    return result
}
