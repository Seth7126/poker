// ============================================================
// 函数名称: sub_409440
// 虚拟地址: 0x409440
// WARP GUID: ecb4c6f8-369f-5b53-8dc9-208d81e16123
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4aa582, sub_409498, sub_424200, sub_409474, sub_42c938, sub_40b250
// ============================================================

int32_t __convention("regparm")sub_409440(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char* edi = arg2
    char* edi = arg2
    int32_t ebx = arg3
    bool cond:1 = arg3 != 0
    
    if (arg3 != 0)
        while (arg3 != 0)
            char temp1_1 = *edi
            cond:1 = 0 != temp1_1
            edi = &edi[1]
            arg3 -= 1
            
            if (0 == temp1_1)
                break
        
        if (not(cond:1))
            arg3 += 1
    
    int32_t ebx_1 = ebx - arg3
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(arg1, arg2, ebx_1 u>> 2 << 2)
    *__builtin_memcpy(edi_2, esi_2, ebx_1 & 3) = 0
    return arg1
}
