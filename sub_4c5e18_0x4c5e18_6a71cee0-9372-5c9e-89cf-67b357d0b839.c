// ============================================================
// 函数名称: sub_4c5e18
// 虚拟地址: 0x4c5e18
// WARP GUID: 6a71cee0-9372-5c9e-89cf-67b357d0b839
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c5d6c, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_t __convention("regparm")sub_4c5e18(int32_t arg1)
{
    // 第一条实际指令: char ecx
    char ecx
    char var_9 = ecx
    char edx
    char var_a = edx
    int32_t result = *(*data_5301f4 + 0x10020)
    int32_t __saved_ebp
    
    if (*(*data_5301f4 + 0x20060) != 1)
        int32_t ebx_1 = arg1
        
        if (ebx_1 s> 0)
            while (true)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
                
                if (sub_4c5d6c(&__saved_ebp) != 0)
                    int32_t temp2_1 = ebx_1
                    ebx_1 -= 1
                    
                    if (temp2_1 == 1)
                        break
    else
        int32_t ebx = arg1
        
        if (ebx s> 0)
            while (true)
                int32_t result_2 = result
                result -= 1
                
                if (add_overflow(result_2, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (sub_4c5d6c(&__saved_ebp) != 0)
                    int32_t temp3_1 = ebx
                    ebx -= 1
                    
                    if (temp3_1 == 1)
                        break
    return result
}
