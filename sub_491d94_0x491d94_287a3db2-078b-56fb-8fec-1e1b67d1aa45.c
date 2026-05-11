// ============================================================
// 函数名称: sub_491d94
// 虚拟地址: 0x491d94
// WARP GUID: 287a3db2-078b-56fb-8fec-1e1b67d1aa45
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_491d44, sub_42fd20
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_491d94(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = sub_42fd20(arg1)
    int32_t* result = sub_42fd20(arg1)
    
    if ((arg1[8].b & 0x40) == 0)
        int32_t eax_2 = sub_491d44(arg1)
        int32_t eax_6 = (arg1[0xaa] - 1) * eax_2 + 1
        int32_t edi_1 = arg1[0xab]
        int32_t var_10_1 = edi_1
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q(arg1[0xe] - 1)
        arg1[0xa9] = divs.dp.d(edx_1:eax_9, eax_2) + 1
        int32_t esi_5 = divs.dp.d(edx_1:eax_9, eax_2) * eax_2 + 1
        
        if (esi_5 s< eax_6)
            esi_5 = eax_6
        
        int32_t eax_12 = arg1[0xf]
        
        if (edi_1 s<= eax_12)
            edi_1 = eax_12
        
        if (esi_5 != arg1[0xe] || edi_1 != arg1[0xf])
            arg1[0xd]
            arg1[0xc]
            (*(*arg1 + 0x7c))(edi_1, esi_5)
        
        result = arg2
        result[3] = 0
    
    return result
}
