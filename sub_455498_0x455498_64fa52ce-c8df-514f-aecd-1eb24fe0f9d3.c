// ============================================================
// 函数名称: sub_455498
// 虚拟地址: 0x455498
// WARP GUID: 64fa52ce-c8df-514f-aecd-1eb24fe0f9d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_455694
// ============================================================

int32_t __fastcallsub_455498(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_1 = arg2[2] << 7
    int32_t eax_1 = arg2[2] << 7
    int32_t var_10 = arg2[6] * eax_1
    int32_t esi = 0
    
    while (true)
        int32_t result = arg2[4]
        
        if (esi s>= result)
            return result
        
        if (result - esi s<= arg2[5])
            result = arg2[4] - esi
        else
            result = arg2[5]
        
        int32_t edx_3 = arg2[6] + esi
        
        if (result s>= arg2[7] - edx_3)
            result = arg2[7] - edx_3
        
        if (result s>= arg2[1] - edx_3)
            result = arg2[1] - edx_3
        
        if (result s<= 0)
            return result
        
        int32_t edi_2 = result * eax_1
        
        if (arg1 == 0)
            *(*arg2 + (esi << 2))
            arg2[0xc](edi_2, var_10)
        else
            *(*arg2 + (esi << 2))
            arg2[0xd](edi_2, var_10)
        
        var_10 += edi_2
        esi += arg2[5]
}
