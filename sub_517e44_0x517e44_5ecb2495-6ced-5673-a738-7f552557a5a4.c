// ============================================================
// 函数名称: sub_517e44
// 虚拟地址: 0x517e44
// WARP GUID: 5ecb2495-6ced-5673-a738-7f552557a5a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517744, sub_403010
// [被调用的父级函数]: sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_517e44(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = 0
    int32_t i_1 = sx.d(*(arg1 + 0x100))
    
    if (i_1 s> 0)
        void* edi_1 = arg1 + 1
        int32_t i
        
        do
            if (arg2 == *edi_1)
                char eax_3
                
                if (*(*data_5301f4 + 4) != 7)
                    eax_3 = sub_517744(*(edi_1 - 1))
                
                if (*(*data_5301f4 + 4) == 7 || eax_3 == 0)
                    int32_t result_1 = result
                    result += 1
                    
                    if (add_overflow(result_1, 1))
                        sub_403010()
                        noreturn
            
            if (arg2 == 6 && sub_517744(*(edi_1 - 1)) != 0)
                int32_t result_2 = result
                result += 1
                
                if (add_overflow(result_2, 1))
                    sub_403010()
                    noreturn
            
            edi_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
