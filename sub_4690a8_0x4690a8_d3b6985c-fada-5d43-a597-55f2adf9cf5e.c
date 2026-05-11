// ============================================================
// 函数名称: sub_4690a8
// 虚拟地址: 0x4690a8
// WARP GUID: d3b6985c-fada-5d43-a597-55f2adf9cf5e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4746a0
// ============================================================

int32_t __convention("regparm")sub_4690a8(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: arg3[1] = 0
    arg3[1] = 0
    int32_t i = 0
    *arg3 = 0
    arg3[2].b = 0
    *(arg3 + 0x29) = 0
    
    if (*(arg1 + 0xcf9) == 0)
        for (i = 0; i != 0x24; i += 1)
            bool o_1 = unimplemented  {imul edx, eax, 0x17}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (arg2 == *(arg1 + i * 0xb8 + 0x466c))
                i *= 0x17
                bool o_2 = unimplemented  {imul eax, eax, 0x17}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(arg3, arg1 + (i << 3) + 0x466c, 0xb8)
                break
    
    return i
}
