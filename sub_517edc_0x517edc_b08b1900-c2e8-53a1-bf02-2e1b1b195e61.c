// ============================================================
// 函数名称: sub_517edc
// 虚拟地址: 0x517edc
// WARP GUID: b08b1900-c2e8-53a1-bf02-2e1b1b195e61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4cd498
// ============================================================

int32_t __convention("regparm")sub_517edc(int32_t arg1, char arg2)
{
    // 第一条实际指令: void var_10c
    void var_10c
    __builtin_memcpy(&var_10c, arg1, 0x104)
    int32_t result = 0
    int16_t i_2
    int32_t i_1 = sx.d(i_2)
    
    if (i_1 s> 0)
        void* eax = &var_10c
        int32_t i
        
        do
            if (arg2 == *eax)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            eax += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
