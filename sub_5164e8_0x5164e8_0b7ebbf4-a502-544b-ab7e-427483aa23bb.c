// ============================================================
// 函数名称: sub_5164e8
// 虚拟地址: 0x5164e8
// WARP GUID: 0b7ebbf4-a502-544b-ab7e-427483aa23bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_50d3d8, sub_403010
// [被调用的父级函数]: sub_516544, sub_5166d8
// ============================================================

int32_t __convention("regparm")sub_5164e8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    
    for (int32_t i = 1; i != 9; i += 1)
        int32_t edi_1 = i * 0xe9
        bool o_1 = unimplemented  {imul edi, ebx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 + (edi_1 << 2) + 0x34c) = 0
        uint32_t eax
        eax, edx = GetTickCount()
        *(arg1 + (edi_1 << 2) + 0x350) = eax
    
    sub_50d3d8(*(arg1 + 0xc), edx)
    *(arg1 + 0x1e3) = 0
    *(arg1 + 0x1e4) = 0
    *(arg1 + 0x346) = 0
    int32_t result
    result.b = arg3:3.b
    return result
}
