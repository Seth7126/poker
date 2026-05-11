// ============================================================
// 函数名称: sub_51017e
// 虚拟地址: 0x51017e
// WARP GUID: b76bafa4-8313-5ff3-9c0e-f7b6645bb51d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_51017e(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *(**(arg1[-1] + 0x48) + 0x1b1f5) = 1
    *(**(arg1[-1] + 0x48) + 0x1b1f5) = 1
    sub_403898(__return_addr)
    int32_t eax_3 = *(arg1[-1] + 0x44)
    int32_t edx_2 = **(arg1[-1] + 0x48)
    int32_t ecx_1 = *(arg1[-1] + 0x30)
    int32_t ecx_2 = ecx_1 s>> 1
    bool c = unimplemented  {sar ecx, 0x1}
    
    if (ecx_1 s>> 1 s< 0)
        ecx_2 = adc.d(ecx_2, 0, c)
    
    int32_t temp2 = *(edx_2 + (eax_3 << 2) + 0x24)
    *(edx_2 + (eax_3 << 2) + 0x24) -= ecx_2
    
    if (add_overflow(temp2, neg.d(ecx_2)))
        sub_403010()
        noreturn
    
    void* eax_6 = **(arg1[-1] + 0x48)
    int32_t temp3 = *(eax_6 + 0x1b20c)
    *(eax_6 + 0x1b20c) += 1
    
    if (add_overflow(temp3, 1))
        sub_403010()
        noreturn
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = sub_403e1c(&arg1[-3], 2)
    *arg1
    return result
}
