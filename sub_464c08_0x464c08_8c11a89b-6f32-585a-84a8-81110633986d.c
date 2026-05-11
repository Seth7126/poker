// ============================================================
// 函数名称: sub_464c08
// 虚拟地址: 0x464c08
// WARP GUID: 8c11a89b-6f32-585a-84a8-81110633986d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464bd8
// [被调用的父级函数]: sub_464f18, sub_464dec, sub_464cf0, sub_464d1c, sub_4650ac, sub_464ca4, sub_465154, sub_464cc4
// ============================================================

void __convention("regparm")sub_464c08(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp = *(arg1 + 0x1c)
    int32_t ebp = *(arg1 + 0x1c)
    
    if (arg3 == 0)
        int32_t* eax = *(arg1 + 0x20)
        *(*eax + 0x14) = 0x27
        (**eax)()
    
    if (*(arg1 + 0xc) != 0)
        return 
    
    int32_t i = ebp + arg3
    int32_t esi_3 = (arg2 & ((1 << arg3.b) - 1)) << (0x18 - i.b) | *(arg1 + 0x18)
    
    for (; i s>= 8; i -= 8)
        char* edx_2 = *(arg1 + 0x10)
        *(arg1 + 0x10) += 1
        uint32_t edi_3 = zx.d((esi_3 s>> 0x10).b)
        *edx_2 = edi_3.b
        int32_t temp0_1 = *(arg1 + 0x14)
        *(arg1 + 0x14) -= 1
        
        if (temp0_1 == 1)
            sub_464bd8(arg1)
        
        if (edi_3 == 0xff)
            char* edx_3 = *(arg1 + 0x10)
            *(arg1 + 0x10) += 1
            *edx_3 = 0
            int32_t temp1_1 = *(arg1 + 0x14)
            *(arg1 + 0x14) -= 1
            
            if (temp1_1 == 1)
                sub_464bd8(arg1)
        
        esi_3 <<= 8
    
    *(arg1 + 0x18) = esi_3
    *(arg1 + 0x1c) = i
}
