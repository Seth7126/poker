// ============================================================
// 函数名称: sub_466160
// 虚拟地址: 0x466160
// WARP GUID: 2d2d37ea-dc87-5142-8494-05d51f33ae66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_466138
// [被调用的父级函数]: sub_466208, sub_466238
// ============================================================

int32_t __convention("regparm")sub_466160(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp = arg1[3]
    int32_t ebp = arg1[3]
    
    if (arg3 == 0)
        int32_t* eax = arg1[8]
        *(*eax + 0x14) = 0x27
        (**eax)()
    
    int32_t i = ebp + arg3
    int32_t esi_3 = (arg2 & ((1 << arg3.b) - 1)) << (0x18 - i.b) | arg1[2]
    
    for (; i s>= 8; i -= 8)
        char* edx_2 = *arg1
        *arg1 += 1
        uint32_t edi_3 = zx.d((esi_3 s>> 0x10).b)
        *edx_2 = edi_3.b
        int32_t temp0_1 = arg1[1]
        arg1[1] -= 1
        
        if (temp0_1 == 1 && sub_466138(arg1) == 0)
            return 0
        
        if (edi_3 == 0xff)
            char* edx_3 = *arg1
            *arg1 += 1
            *edx_3 = 0
            int32_t temp1_1 = arg1[1]
            arg1[1] -= 1
            
            if (temp1_1 == 1 && sub_466138(arg1) == 0)
                return 0
        
        esi_3 <<= 8
    
    arg1[2] = esi_3
    arg1[3] = i
    return 1
}
