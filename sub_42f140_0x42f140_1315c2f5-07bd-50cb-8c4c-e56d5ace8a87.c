// ============================================================
// 函数名称: sub_42f140
// 虚拟地址: 0x42f140
// WARP GUID: 1315c2f5-07bd-50cb-8c4c-e56d5ace8a87
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_42f088
// [被调用的父级函数]: sub_43101c, sub_42f1d4, sub_43909f, sub_42fd68, sub_4328bc, sub_42f268, sub_42a1dc, sub_439178
// ============================================================

int32_t __stdcallsub_42f140(void* arg1 @ eax, char arg2)
{
    // 第一条实际指令: char ecx
    char ecx
    char var_11 = ecx
    int32_t edx
    int32_t var_8 = edx
    int32_t __saved_ebp
    
    if (arg2 != 0 && *(arg1 + 0x180) != 0)
        void* i = *(*(arg1 + 0x180) + 8) - 1
        
        if (i s>= 0)
            do
                int32_t* var_24_1 = &__saved_ebp
                
                if (sub_42f088(sub_410524(*(arg1 + 0x180), i), i) != 0)
                    break
                
                i -= 1
            while (i != 0xffffffff)
    
    void* eax_4 = *(arg1 + 0x134)
    
    if (eax_4 != 0)
        void* i_1 = *(eax_4 + 8) - 1
        
        if (i_1 s>= 0)
            do
                int32_t* var_24_2 = &__saved_ebp
                
                if (sub_42f088(sub_410524(*(arg1 + 0x134), i_1), i_1) != 0)
                    break
                
                i_1 -= 1
            while (i_1 != 0xffffffff)
    
    return 0
}
