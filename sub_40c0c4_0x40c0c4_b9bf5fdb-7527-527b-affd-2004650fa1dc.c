// ============================================================
// 函数名称: sub_40c0c4
// 虚拟地址: 0x40c0c4
// WARP GUID: b9bf5fdb-7527-527b-affd-2004650fa1dc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_404248, sub_408a34, sub_404078
// [被调用的父级函数]: sub_41c688, sub_40c05c
// ============================================================

void* __convention("regparm")sub_40c0c4(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (data_5315bc == 0)
    if (data_5315bc == 0)
        return sub_408a34(arg1, arg2)
    
    int32_t eax_1 = sub_404078(arg1)
    void* result = sub_4043ac(arg2, eax_1)
    int32_t ebx_1 = 1
    
    if (eax_1 s>= 1)
        do
            void* eax_4 = sub_404248(arg2)
            *(eax_4 + ebx_1 - 1) = *(arg1 + ebx_1 - 1)
            eax_4.b = *(arg1 + ebx_1 - 1)
            
            if (not(test_bit(data_52e118, eax_4 & 0xff)))
                result.b = *(*arg2 + ebx_1 - 1)
                result.b -= 0x41
                char temp0_1 = result.b
                result.b -= 0x1a
                
                if (temp0_1 u< 0x1a)
                    result = sub_404248(arg2)
                    *(result + ebx_1 - 1) += 0x20
            else
                ebx_1 += 1
                result = sub_404248(arg2)
                *(result + ebx_1 - 1) = *(arg1 + ebx_1 - 1)
            
            ebx_1 += 1
        while (eax_1 s>= ebx_1)
    
    return result
}
