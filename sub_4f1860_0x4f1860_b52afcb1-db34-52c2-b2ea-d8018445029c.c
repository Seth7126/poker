// ============================================================
// 函数名称: sub_4f1860
// 虚拟地址: 0x4f1860
// WARP GUID: b52afcb1-db34-52c2-b2ea-d8018445029c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4da6ec, sub_4e6659, sub_4da6d7, sub_4e649b
// ============================================================

uint32_t __fastcallsub_4f1860(int32_t arg1, char arg2, char* arg3 @ eax, uint32_t arg4)
{
    // 第一条实际指令: uint32_t result = arg4
    uint32_t result = arg4
    
    if (result == 0)
        bool o_1 = unimplemented  {imul eax, ecx, 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        result = *(data_5301b0 + arg1 * 0x8d14 - 0x39c)
    
    if (arg2 != 1)
    label_4f18c0:
        *(arg3 + 0x48) = arg1
        *(arg3 + 0x50) = arg1
        *(arg3 + 0x4c) = result
        *(arg3 + 0x54) = result
        *arg3 = 1
        arg3[1] = 1
        *(arg3 + 8) = 0x40400000
        
        if (arg2 != 1)
            if (arg2 == 0)
                *(arg3 + 4) = 0
                *(arg3 + 0x50) = arg1
                __builtin_memset(&arg3[0x18], 0, 0x21)
                *(arg3 + 0x3c) = 0
                *(arg3 + 0x44) = 0
                *(arg3 + 0x40) = 0
                *(arg3 + 0x10) = 0x64
                *(arg3 + 0x14) = GetTickCount()
                result = 0
                *(arg3 + 0x74) = 0
        else if (arg3[0xc] != 0)
            result = GetTickCount()
            *(arg3 + 0x14) = result
            *(arg3 + 0x10) = 0x64
        else
            uint32_t eax_1 = GetTickCount()
            int32_t eax_3
            int32_t edx_4
            edx_4:eax_3 = sx.q(*(arg3 + 0x14))
            int32_t var_14_2 = sbb.d(0, edx_4, eax_1 u< eax_3)
            *(arg3 + 0x10) = eax_1 - eax_3
            result = GetTickCount()
            *(arg3 + 0x14) = result
        
        arg3[0xc] = arg2
    else
        bool o_2 = unimplemented  {imul edx, ecx, 0x2345}
        
        if (o_2)
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul edx, eax, 0x35}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + arg1 * 0x8d14 + result * 0xd4 - 0x8d8c) != 0)
            goto label_4f18c0
    
    return result
}
