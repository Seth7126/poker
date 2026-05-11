// ============================================================
// 函数名称: sub_42c938
// 虚拟地址: 0x42c938
// WARP GUID: 0355db9c-e100-5db8-9376-f6fa3e3d8dd3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b378, sub_409440, sub_4095f8, sub_4093b0, sub_4095cc
// [被调用的父级函数]: sub_42f448
// ============================================================

int32_t __convention("regparm")sub_42c938(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax = *arg2
    int32_t eax = *arg2
    
    if (eax == 0xc)
        void* eax_7 = sub_4095cc(arg2[2])
        sub_4095f8(*(arg1 + 0x54))
        *(arg1 + 0x54) = eax_7
        return sub_42b378(arg2[1], *arg2, arg1, arg2[2])
    
    int32_t result
    
    if (eax == 0xd)
        char* eax_3 = *(arg1 + 0x54)
        char* edi_1
        
        edi_1 = eax_3 == 0 ? &data_42c9bc : eax_3
        
        int32_t eax_4 = arg2[2]
        sub_409440(eax_4, edi_1, arg2[1] - 1)
        result = sub_4093b0(eax_4)
        arg2[3] = result
    else
        result = eax - 0xe
        
        if (eax == 0xe)
            int32_t edi_2 = *(arg1 + 0x54)
            
            if (edi_2 != 0)
                result = sub_4093b0(edi_2)
                arg2[3] = result
            else
                result = 0
                arg2[3] = 0
    
    return result
}
