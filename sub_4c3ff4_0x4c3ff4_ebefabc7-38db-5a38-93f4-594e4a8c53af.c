// ============================================================
// 函数名称: sub_4c3ff4
// 虚拟地址: 0x4c3ff4
// WARP GUID: ebefabc7-38db-5a38-93f4-594e4a8c53af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4c4068
// ============================================================

int32_t __convention("regparm")sub_4c3ff4(int32_t arg1, int32_t arg2, char arg3, void* arg4)
{
    // 第一条实际指令: if (arg3 != 0)
    if (arg3 != 0)
        void* eax
        eax.b = *(arg4 - 0x130)
        char temp0_1 = eax.b
        eax.b -= 5
        char temp1_1
        
        if (temp0_1 != 5)
            eax.b -= 4
            temp1_1 = eax.b
            eax.b -= 2
        
        if (temp0_1 == 5 || temp1_1 u< 2)
            void* eax_1
            eax_1.b = *(arg4 - 0x130)
            
            if (eax_1.b == *(arg4 - 0x260))
                return 0
    
    int32_t result = 0
    
    if (*(arg4 - 0x264) s<= 0)
        result.b = 1
        
        if (arg2 s>= arg1)
            if (arg1 s>= arg2)
                return 0
            
            *(arg4 - 0x264) = 2
        else
            *(arg4 - 0x264) = 1
    
    return result
}
