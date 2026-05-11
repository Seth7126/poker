// ============================================================
// 函数名称: sub_4166b0
// 虚拟地址: 0x4166b0
// WARP GUID: 07df55af-51b9-51e7-b276-99a7232b4189
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4166b0(int32_t* arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 == arg1[0xc])
    if (arg2 == arg1[0xc])
        return arg2
    
    int32_t esi_2 = *(arg1[0x10] + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            (*(*sub_410524(arg1[0x10], edi_1) + 0x10))(arg2, arg3)
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[0xc] = arg2
    arg1[0xd] = arg3
    return (*(*arg1 + 0x30))()
}
