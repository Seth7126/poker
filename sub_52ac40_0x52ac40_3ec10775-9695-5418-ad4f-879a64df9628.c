// ============================================================
// 函数名称: sub_52ac40
// 虚拟地址: 0x52ac40
// WARP GUID: 3ec10775-9695-5418-ad4f-879a64df9628
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c5eb0
// ============================================================

int32_t __convention("regparm")sub_52ac40(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx = arg2
    int32_t ecx = arg2
    char ebx = 0
    
    if (ecx s< 0)
        ebx = 1
        int32_t temp2_1 = ecx
        ecx = neg.d(ecx)
        
        if (neg.d(temp2_1) == 0x80000000)
            sub_403010()
            noreturn
    
    int32_t ebp = *(*data_5301f4 + 0x21108)
    int32_t result_1 = divs.dp.d(sx.q(ecx), ebp)
    int32_t result
    
    if (result_1 s<= 0x28)
        data_5301f4
        
        if (result_1 s> 0xa)
            int32_t eax_6 = ebp * 0xa
            bool o_2 = unimplemented  {imul eax, ebp, 0xa}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (add_overflow(ecx, neg.d(eax_6)))
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul edx, ebp, 0x5}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t temp0 = divs.dp.d(sx.q(ecx - eax_6), ebp * 5)
            result = temp0 + 0xa
            
            if (add_overflow(temp0, 0xa))
                sub_403010()
                noreturn
        else
            result = result_1
    else
        result = 0x10
    
    if (ebx != 0)
        int32_t result_2 = result
        result += 0x14
        
        if (add_overflow(result_2, 0x14))
            sub_403010()
            noreturn
    
    int32_t temp4 = *(arg1 + (result << 2) + 4)
    *(arg1 + (result << 2) + 4) += 1
    
    if (add_overflow(temp4, 1))
        sub_403010()
        noreturn
    
    int32_t temp6 = *(arg1 + 0xa8)
    *(arg1 + 0xa8) += 1
    
    if (not(add_overflow(temp6, 1)))
        result.b = arg3.b
        return result
    
    sub_403010()
    noreturn
}
