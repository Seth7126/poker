// ============================================================
// 函数名称: sub_51472b
// 虚拟地址: 0x51472b
// WARP GUID: a0b6b082-aa39-5c07-8bca-bda8f5ba6e5c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_51472b(char* arg1, int32_t* arg2, int16_t arg3, void* arg4 @ ebp, char* arg5 @ edi)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    arg1.b ^= *arg1
    *arg2 += arg1.b
    *arg1
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t result = 0
    int32_t i_1 = *(*(*(arg4 + 8) - 4) + 0x348)
    
    if (i_1 s> 0)
        int32_t edx = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul ebx, edx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*(*(arg4 + 8) - 4) + edx * 0x3a4 - 0x50) == 3)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            edx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
