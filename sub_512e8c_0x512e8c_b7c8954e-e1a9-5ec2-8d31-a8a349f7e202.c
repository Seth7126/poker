// ============================================================
// 函数名称: sub_512e8c
// 虚拟地址: 0x512e8c
// WARP GUID: b7c8954e-e1a9-5ec2-8d31-a8a349f7e202
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_50d52c
// [被调用的父级函数]: sub_512f20
// ============================================================

void* __fastcallsub_512e8c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: sub_50d52c(arg1, arg1)
    sub_50d52c(arg1, arg1)
    
    if (*(arg2 + 0x15c8) s> 0)
        __builtin_memcpy(arg1, arg2, 0x84)
        int32_t temp0_1 = *(arg2 + 0x15c8)
        *(arg2 + 0x15c8) -= 1
        
        if (add_overflow(temp0_1, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t ebx_1 = *(arg2 + 0x15c8)
        
        if (ebx_1 s>= 0)
            int32_t i_1 = ebx_1 + 1
            int32_t edx_1 = 0
            int32_t i
            
            do
                bool o_2 = unimplemented  {imul ecx, edx, 0x21}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                bool o_3 = unimplemented  {imul esi, edx, 0x21}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(arg2 + edx_1 * 0x84, arg2 + edx_1 * 0x84 + 0x84, 0x84)
                edx_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return arg2
}
